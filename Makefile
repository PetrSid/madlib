# Compile and flags
CC      = gcc
CFLAGS  = -Wall -Wextra -Icore/include -O0 -g


# $(wildcard src/data/*.c) $(wildcard src/alg/*.c)
# tests/main.c core/src/data/dyn_arr.c
# tests/main.c core/src/data/dl_list.c

SRC     = tests/main.c core/src/data/dl_list.c
TARGET  = build/mlib


all: $(TARGET)

# Check the dir build
$(TARGET): $(SRC)
	mkdir -p build
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -rf build/