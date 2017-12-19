#include <stdio.h>

int main(void)
{
  int x;

  x = 14;
  int *y;
  int **z;
  y = &x;
  z = &y;

  **z = 17;
  printf("x = %d\n", x);
  printf("y = %d\n", *y);
  printf("z = %d\n", **z);
  return (0);
}
