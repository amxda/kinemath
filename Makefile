.PHONY: all build clean

all: build
	./main
build:
	gcc main.c -o main -Wall -Wextra -O2 -g
clean:
	rm main 
