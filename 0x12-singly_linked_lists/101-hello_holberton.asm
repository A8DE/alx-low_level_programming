global   main
	  extern    printf
main:
	mov   edi, Msg
	xor   eax, eax
	call  printf
	mov   eax, 0
	ret
Msg: db `Hello, Holberton\n`,0

