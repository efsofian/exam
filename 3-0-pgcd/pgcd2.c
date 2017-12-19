#include <stdio.h>

int main(void)
{
  int a = 25;
  int b = 5;
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
