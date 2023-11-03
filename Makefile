.PHONY: all build clean

all: build
	./projectile
build:
	gcc projectile.c -o projectile -Wall -Wextra -O2 -g
clean:
	rm projectile
