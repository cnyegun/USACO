#include <array>
#include <vector>
#include <iostream>

int main(void)
{
	std::vector<int> v {};

	int input;
	for (int i = 0; i < 3; i++) {
		std::cin >> input;
		v.push_back(input);
	}

	for (int i = 0; i < 3; i++) {
		std::cout << v[i]; 
	}

	return 0;
}
