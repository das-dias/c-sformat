CC = clang
CFLAGS = -Wall -Werror -Wextra -g

SRC = *.o *.so
OBJ = $(SRC:.cc=.o)
EXEC = libtest libstaticsformat.a libsformat.so runtime_libtest static_libtest

all: $(EXEC)

libsformat.o: libsformat.c sformat.h
	$(CC) $(CFLAGS) -c libsformat.c

libsformat.so: libsformat.c sformat.h
	$(CC) $(CFLAGS) -fPIC -shared -o $@ libsformat.c -lc

libstaticsformat.a: libsformat.o
	ar rcs libstaticsformat.a libsformat.o

libtest: libtest.c libsformat.o
	$(CC) $(CFLAGS) -o $@ $^

runtime_libtest: libtest.c
	$(CC) $(CFLAGS) -o $@ $^ -L. -lsformat

static_libtest: libtest.c
	$(CC) $(CFLAGS) -o $@ $^ -L. -lstaticsformat

clean:
	rm -rf $(OBJ) $(EXEC)