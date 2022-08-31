###
# Makefile
# author: oleg <oleg@osvoj.ru>
# license: MIT
###
hello: clean main.o hello.o
	  gcc -finput-charset=UTF-8 -fexec-charset=UTF-8  -o hello ./hello.o ./main.o
hello.o:
	  gcc -c ./hello.c
main.o:
	  gcc -c ./main.c
clean:
	  rm -f *.o *.exe
