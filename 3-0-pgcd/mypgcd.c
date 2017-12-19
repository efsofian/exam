#include <stdio.h>

int main(void)
{
  int a;
  int b;
  int c;

  a = 12;
  b = 42;
  c = a % b;
  while (c)
  {
    a = b;
    b = c;
    c = a % b;
  }
  printf("%d", b);
  return (0);
}
