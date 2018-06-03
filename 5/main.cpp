#include <iostream>

extern "C" {
	int Question1(int a, int b);
	int Question2(int a, int b);
	int Question3(int a, int b);
	int Question4(int a);
}

void PrintBits(int x) {
	for(int i = 31; i >= 0; i--) {
		std::cout << ((x >> i) & 1);
	}

	std::cout << std::endl;
}

int main() {
	//PrintBits(2783);
	//PrintBits(1552);
	//PrintBits(Question3(2783, 1552));

	std::cout << Question4(129) << std::endl;
}
