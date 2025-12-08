#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));
	int n = 9;
	int *A = (int *)malloc(sizeof(int) * n);
	int *B = (int *)malloc(sizeof(int) * n);

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			A[i*3 + j] = rand() % 10;
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			B[j*3 + i] = A[i*3 + j];
		}
	}

	printf("Normal: \n");
	for (int i = 0; i < n / 3; i++) {
		for (int j = 0; j < n / 3; j++) {
			printf("%d ", A[i*3 + j]);
		}
		printf("\n");
	}

	printf("Transpose: \n");
	for (int i = 0; i < n / 3; i++) {
		for (int j = 0; j < n / 3; j++) {
			printf("%d ", B[i*3 + j]);
		}
		printf("\n");
	}


	printf("\n");
}
