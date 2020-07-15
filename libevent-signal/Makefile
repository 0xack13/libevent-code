CC=gcc
CFLAGS=-I.

default: libevent-signal

libevent-signal:
	$(CC) -o libevent-signal libevent-signal.c -levent

clean:
	@echo "Cleaning up..."
	rm libevent-signal