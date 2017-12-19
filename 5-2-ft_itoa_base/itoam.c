#include <stdlib.h>
#include <stdio.h>

int nbr_base(int value, int base)
{
  int ret;

  ret = 0;
  if (value == 0)
    return (1);
  if (value < 0 && base == 10 )
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
  char *stru = "0123456789ABCDEF";
  long value_cpy;
  int value_len;
  int flag_neg;
  char *ret;

  if (base < 2 || base > 16)
    return (0);
  value_len = nbr_base(value, base);
  value_cpy = value;
  if(!(ret = (char *)malloc(sizeof(char) * value_len + 1)))
    return (NULL);
  flag_neg = value < 0 ? 1 : 0;
  value_cpy = value_cpy < 0 ? -value_cpy : value_cpy;
  ret[value_len] = '\0';
  while (--value_len)
  {
    ret[value_len] = stru[value_cpy % base];
    value_cpy = value_cpy / base;
  }
  ret[value_len] = flag_neg ? '-' : stru[value_cpy % base];
  return (ret);
}

int main(void)
{
  printf("%s", ft_itoa_base(-35, 10));
  return (0);
}
