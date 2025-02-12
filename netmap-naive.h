#include "netmap.h"

in_addr_t generate(void);
bool tcp_connect(in_addr_t, int16);
int main(int, char **);
int8 *read_header(int, in_addr_t);