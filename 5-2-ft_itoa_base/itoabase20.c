#include <stdlib.h>

int nbr_base(int value, int base)
{
  int ret = 0;
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
  char *spe = "0123456789ABCDEF";
  char *ret;
  int neg;
  long cpy_value;
  int len;

  len = nbr_base(value, base);
  if (!(ret = (char *)malloc(sizeof(char) * len + 1)))
    return (NULL);
  cpy_value = value;
  neg = cpy_value < 0 && base == 10 ? 1 : 0;
  cpy_value = cpy_value < 0 ? -cpy_value : cpy_value;
  ret[len] = '\0';
  while (--len)
  {
    ret[len] = spe[cpy_value % base];
    cpy_value = cpy_value / base;
  }
  ret[len] = neg ? '-' : spe[cpy_value % base];
  return (ret);
}

int main(void)
{
  printf("%s", ft_itoa_base(22, 10));
  return (0);
}
