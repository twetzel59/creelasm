#include <iostream>

extern "C" {
	int AddInts(int a, int b, int c, int d);
	int MulBy17(int a);
	int Sub5x(int a, int b);
}

int main() {
	std::cout << "Sum: " << AddInts(2, 4, 5, 7) << std::endl;
	std::cout << "17x: " << MulBy17(2) << std::endl;
	std::cout << "5b less: " << Sub5x(2, 4) << std::endl;
}
