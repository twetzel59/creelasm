global AddInts
global MulBy17
global Sub5x

segment .text
AddInts: ; (int a,b,c,d) -> int
	mov 	eax,	edi
	add 	eax,	esi
	add 	eax,	edx
	add	eax,	ecx
	ret

MulBy17: ; (int a) -> int
	mov 	eax,	edi
	imul 	eax,	17
	ret

Sub5x: ; (int a,b) -> int
	imul	esi,	5
	mov	eax,	edi
	sub	eax,	esi
	ret
