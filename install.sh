#!/bin/bash

if [ "$EUID" -ne 0 ]; then 
	echo "Please run as root"
	exit
fi

command -v make > /dev/null
if [ $? -ne 0 ]; then
	echo "make is not installed"
	exit
fi

ldconfig -p | grep libmarkdown > /dev/null
if [ $? -ne 0 ]; then
	echo "libmarkdown is not installed"
	exit
else
	echo "Compiling..."
	make
	echo "Done!"
	chmod +x ./bin/markdownc
	sudo install ./bin/markdownc /usr/bin
	echo "Installed in /usr/bin"
	exit
fi
