CC=gcc
CFLAGS=-I. -O2
DEPS=linalg.h 
OBJ=linalg.o ler.o 
TARGET=testa
LIBS=-lm

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

$(TARGET): $(OBJ)
	$(CC) -o $@  $^  $(CFLAGS) $(LIBS)

clean: 
	rm $(OBJ)
