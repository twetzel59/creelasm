global ReverseBits

section .text

ReverseBits:
	xor al, al

	and dil, 1
	or  al, dil
	
	ret
