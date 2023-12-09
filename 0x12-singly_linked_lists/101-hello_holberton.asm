globalmain
externprintf
main:
movedi, format
xoreax, eax
call printf
moveax, 0
ret
format: db `Hello, Holberton\n`,0
