runme: main.cpp asm.o
	g++ asm.o main.cpp -o runme

asm.o: asm.asm
	nasm -f elf64 asm.asm -o asm.o