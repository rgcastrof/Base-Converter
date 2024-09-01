NAME = bconv

# Compiler
CC = gcc

# Flags
CFLAGS = -std=c99 -pedantic -Wall -Wextra

# Intallation directory
PREFIX = /usr/local

# Binaries
BINDIR = $(PREFIX)/bin

# Targets
all: $(NAME)

$(NAME): main.o conversions.o
	$(CC) $(CFLAGS) -o $(NAME) main.o conversions.o

main.o: main.c conversions.h
	$(CC) $(CFLAGS) -c main.c

conversions.o: conversions.c conversions.h
	$(CC) $(CFLAGS) -c conversions.c

install: $(NAME)
	sudo install -m 755 $(NAME) $(BINDIR)

uninstall:
	sudo rm -f $(BINDIR)/$(NAME)

clean:
	rm -f $(NAME) *.o
