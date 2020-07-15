#include <event2/event.h>
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

void sigint_event_function(evutil_socket_t fd, short what, void *arg)
{
    struct event_base *base = (struct event_base *)arg;
    printf("\nSIGINT\n");
    event_base_loopexit(base, NULL);
}

int main(int argc, char **argv)
{
    struct event *sigint_event;
    struct event_base *base = event_base_new();
    sigint_event = evsignal_new(base, SIGINT, sigint_event_function, base);
    event_add(sigint_event, NULL);
    event_base_dispatch(base);
}