CC = clang
CFLAGS = -Wall -Werror -Wextra -g

SRC = 
OBJ = $(SRC:.cc:.o:.so)
EXEC = libtest libsformat.so runtime_libtest

all: $(EXEC)

libsformat.o: libsformat.c sformat.h
	$(CC) $(CFLAGS) -c libsformat.c

libsformat.so: libsformat.c sformat.h
	$(CC) $(CFLAGS) -fPIC -shared -o $@ libsformat.c -lc

libtest: libtest.c libsformat.o
	$(CC) $(CFLAGS) -o $@ $^

runtime_libtest: libtest.c
	$(CC) $(CFLAGS) -o $@ $^ -L. -lsformat

clean:
	rm -rf $(OBJ) $(EXEC)