#include <stdlib.h>
#include <stdio.h>

int nbr_base(int value, int base)
{
  int ret;

  ret = 0;
  if (value == 0)
    return (1);
  if (value < 0 && base == 10)
    ++ret;
  while (value != 0)
  {
    value = value / base;
    ++ret;
  }
  return (ret);
}

char *ft_itoa_base(int value, int base)
{
  char *ret;
  char *spe = "0123456789ABCDEF";
  int len = nbr_base(value, base);
  int neg;
  long value_cpy;

  if (!(ret = (char *)malloc(sizeof(char) * len + 1)))
    return (NULL);
  ret[len] = '\0';
  value_cpy = value;
  neg = value_cpy < 0 && base == 10 ? 1 : 0;
  value_cpy = value_cpy < 0 ? -value_cpy : value_cpy;
  while (--len)
  {
    ret[len] = spe[value_cpy % base];
    value_cpy = value_cpy / base;
  }
  ret[len] = neg ? '-' : spe[value_cpy % base];
  return (ret);
}

int main(void)
{
  printf("%s", ft_itoa_base(22, 10));
  return (0);
}
