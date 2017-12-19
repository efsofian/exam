#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
  int temp;

  temp = *a;
  *a = *b;
  *b = temp;
}

int main(void)
{
  int a = 10;
  int *c = &a;

  int b = 20;
  int *d = &b;


  printf("%d", a);
  write (1, "\n", 1);
  printf("%d", b);
  write (1, "\n", 1);

  ft_swap(c, d);

  printf("%d", a);
  write (1, "\n", 1);
  printf("%d", b);
  write (1, "\n", 1);
}
