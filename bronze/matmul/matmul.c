#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void matmul(double *A, double *B, double *C, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			double s = 0.0;
			for (int k = 0; k < n; k++) {
				s += A[i*n + k] * B[k*n + j];
			}
			C[i*n + j] = s;
		}
	}
}

int main() {
	int n = 512;

    double *A = malloc(n * n * sizeof(double));
    double *B = malloc(n * n * sizeof(double));
    double *C = malloc(n * n * sizeof(double));

	// fill with random values
    for (int i = 0; i < n*n; i++) {
        A[i] = rand() / (double)RAND_MAX;
        B[i] = rand() / (double)RAND_MAX;
    }

	clock_t start = clock();
    matmul(A, B, C, n);
    clock_t end = clock();

    double secs = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Naive C matmul time: %.3f seconds\n", secs);

    free(A);
    free(B);
    free(C);
    return 0;
}
