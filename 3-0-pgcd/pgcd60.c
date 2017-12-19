#include <unistd.h>
#include <strings.h>
#include <stdio.h>

int main(int argc, char **argv)
{
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int c = a % b;

  while (c)
  {
    a = b;
    b = c;
    c = a % b;
  }
  printf("%d", b);
  return (0);
}
