GCC = g++
GCCFLAGS = -std=c++17 -g -pedantic -Wall -Wextra -Werror -fno-omit-frame-pointer
LIBPATH = ./lib

all: basic multi catchall

basic:
	rm -f basic
	$(GCC) $(GCCFLAGS) -o basic basic_exceptions.cpp

multi:
	rm -f multi
	$(GCC) $(GCCFLAGS) -o multi multiexceptions.cpp

catchall:
	rm -f catchall
	$(GCC) $(GCCFLAGS) -o catchall catchall.cpp

clean:
	rm -f basic multi catchall
