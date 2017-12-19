#include <stdlib.h>

int nbrlen(int value, int base)
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
  int len = nbrlen(value, base);
  char *spe = "0123456789ABCDEF";
  char *ret;
  long cpyvalue;
  int neg;

  if (!(ret = (char *)malloc(sizeof(char) * len + 1)))
    return (NULL);
  ret[len] = '\0';
  cpyvalue = value;
  neg = cpyvalue < 0 && base == 10 ? 1 : 0;
  cpyvalue = cpyvalue < 0 ? -cpyvalue : cpyvalue;
  while (--len)
  {
    ret[len] = spe[cpyvalue % base];
    cpyvalue = cpyvalue / base;
  }
  ret[len] = neg ? '-' : spe[cpyvalue % base];
  return (ret);
}

int main(void)
{
  printf("%s", ft_itoa_base(22, 2));
  return (0);
}
