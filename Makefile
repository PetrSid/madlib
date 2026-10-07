# Compile and flags
CC      = gcc
CFLAGS  = -Wall -Wextra -Icore/include -O0 -g
SRC     = tests/main.c core/src/data/dyn_arr.c # $(wildcard src/data/*.c) $(wildcard src/alg/*.c)
TARGET  = build/dyn_arr


all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -rf build/