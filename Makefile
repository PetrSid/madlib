COMPILE = gcc
CFLAGS  = -Wall -Wextra -Iinclude -O0 -g
SOURCE  = main.c $(wildcard src/data/*.c) $(wildcard src/alg/*.c)
PROJECT = test

all: $(PROJECT)

$(PROJECT): $(SOURCE)
	$(COMPILE) $(CFLAGS) $(SOURCE) -o $(PROJECT)

clean:
	rm -f $(PROJECT)