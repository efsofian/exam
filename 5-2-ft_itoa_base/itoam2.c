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
    value
     = value / base;
    ++ret;
  }
  return (ret);
}

char *ft_itoa_base(int value, int base)
{
  char *spec = "0123456789ABCDEF";
  char *ret;
  long cpy_value;
  int len;
  int flag_neg;

  len = nbr_base(value, base);
  if (!(ret = (char *)malloc(sizeof(char) * len + 1)))
    return (NULL);
  if (base < 2 || base > 16)
    return (0);
  cpy_value = value;
  flag_neg = value < 0 && base == 10 ? 1 : 0;
  ret[len] = '\0';
  cpy_value = cpy_value < 0 ? -cpy_value : cpy_value  ;
  while (--len)
  {
    ret[len] = spec[cpy_value % base];
    cpy_value = cpy_value / base;
  }
  ret[len] = flag_neg ? '-' : spec[cpy_value % base];
  return (ret);
}

int main(void)
{
  printf("%s", ft_itoa_base(-22, 10));
  return (0);
}
