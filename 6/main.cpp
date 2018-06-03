#include <cstdint>
#include <iostream>

extern "C" uint8_t ReverseBits(uint8_t);

void PrintBits(uint8_t a) {
	for(int i = 7; i >= 0; i--) {
		std::cout << ((a >> i) & 1);
	}

	std::cout << std::endl;
}

int main() {
	PrintBits(255);
	PrintBits(ReverseBits(0xAA));
}
