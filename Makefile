CC=/usr/bin/gcc
DEPS=src/lib/file.c src/lib/lexer.c src/lib/html.c

all: clean compile

compile:
	@mkdir -p bin
	$(CC) src/main.c $(DEPS) -o bin/markdownc

clean:
	@rm -rf bin
