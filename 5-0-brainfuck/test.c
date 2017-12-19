#include <stdio.h>

int main (void)
{

unsigned char mem[4096] = {0, 1, 4, 9, 11};

unsigned char *p0 = &mem[0];
unsigned char *p1 = &mem[1];
unsigned char *p2 = &mem[4];

printf("%p", ++p0);
return (0);
}
