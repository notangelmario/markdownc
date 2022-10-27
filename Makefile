CC=/usr/bin/gcc
FLAGS=-lmarkdown

all: clean compile

compile:
	@mkdir -p bin
	$(CC) src/main.c $(FLAGS) -o bin/markdownc

install:
	install bin/markdownc /usr/bin

clean:
	@rm -rf bin
