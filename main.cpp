#include <iostream>

int Sum(int a, int b) {
	return a + b;
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
	return 0;
}
