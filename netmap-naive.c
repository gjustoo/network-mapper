
#include "netmap.h"

in_addr_t current, ending;

int16 port;

in_addr_t generate()
{

    int8 buf[16];

    int32 size;

    if ((!current) && (!ending))
    {
        zero(buf,16);
        fgets(buf,15,stdin);
        size = (int)strlen((char *)buf);

        
        
    }

    if (current >= ending)
    {
        return (in_addr_t)0;
    }
    else
    {

        current++;
    }
    return current;
}

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        fprintf(stderr, "Usage: %s <port> [start IP address] [end IP address]\n", *argv);
        return -1;
    }

    if (argc > 2)
    {
        current = inet_addr(argv[2]);
        ending = (argc > 3) ? inet_addr(argv[3]) : inet_addr("253.255.254.255");

        if ((current == INADDR_NONE) || (ending == INADDR_NONE) || ending < current)
        {
            fprintf(stderr, "Provide a valid IP address: \n Usage: %s <port> [start IP address] [end IP address]\n", *argv);
            return -1;
        }
    }

    port = (int16)atoi(argv[1]);

    return 0;
}