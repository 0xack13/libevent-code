CC=gcc
CFLAGS=-I.

default: libevent-socket

libevent-socket:
	$(CC) -o libevent-socket libevent-socket.c -levent -lpthread -levent_pthreads

clean:
	@echo "Cleaning up..."
	rm libevent-socket