# If you are on windows, change gcc 
# to whatever the name of your gcc is
CC=gcc

all: ting

.PHONY: all clean help

clean:
	rm -f ting

ting: ting.c
	$(CC) -Wall -o ting ting.c
help:
	@echo "ting-calculator"
	@echo "calculate your monthly bill for the Ting mobile carrier"
	@echo "Uses the MIT License"
