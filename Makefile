CC = gcc
CFLAGS = -Wall -Wextra -std=c11
TARGET = hello

.PHONY: build run js

build:
	$(CC) $(CFLAGS) hello.c -o $(TARGET) -L/usr/local/lib -lcs50

run: build
	./$(TARGET)

js:
	node index.js
