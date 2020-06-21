#include "csapp.h"

void unix_error(char *msg) /* Unix-style error */
{
    fprintf(stderr, "%s: %s\n", msg, strerror(errno));
    exit(0);
}

int main(int argc, char *argv[])
{
    struct in_addr inaddr;
    uint32_t addr;
    char buf[MAXBUF];

    if (argc != 2) {
        fprintf(stderr, "usage: %s <hex number>\n", argv[0]);
        exit(0);
    }

    sscanf(argv[1], "%x", &addr);
    inaddr.s_addr = htonl(addr);

    if (!inet_ntop(AF_INET, &addr, buf, MAXBUF))
        unix_error("inet_ntop");

    printf("%s\n", buf);
    exit(0);
}