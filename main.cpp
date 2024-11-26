#include <iostream>
#include <vector>

int Sum(int a, int b) {
	return a + b + 3;
}

int Multiply(int a, int b) {
	return a * b;
}

int Minus(int a, int b) {
	return a - b;
}

int main() {
	std::cout << "Hello" << "\n";
	std::cout << Sum(2, 3) << "\n";
	std::cout << Multiply(2, 3) << "\n";
	std::cout << Minus(5, 1) << "\n";

	std::vector<int> v = {1, 2, 3, 4, 5, 6, 7};
	for (auto x : v) {
		std::cout << x << " ";
	}

	return 0;
}
