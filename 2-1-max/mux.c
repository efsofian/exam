#include <stdio.h>

int max(int *tab, unsigned int len)
{
  int i;

  if (!tab[0])
    return (0);
  int temp = tab[0];

  i = 0;
  while (i < len)
  {
    if (tab[i] > temp)
    {
      temp = tab[i];
      i = -1;
    }
    i++;
  }
  return (temp);
}

int main(void)
{
  int MDR[3];

  MDR[0] = 654;
  MDR[1] = 222;
  MDR[2] = 48;

  printf("%d", max(MDR, 3));
  return (0);
}
