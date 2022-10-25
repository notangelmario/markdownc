CC=/usr/bin/gcc
FLAGS=-lmarkdown

all: clean compile

compile:
	@mkdir -p bin
	$(CC) src/main.c $(FLAGS) -o bin/markdownc

clean:
	@rm -rf bin
