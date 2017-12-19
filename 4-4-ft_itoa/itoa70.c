#include <stdlib.h>

int ft_strlen(char *str)
{
  int i = 0;
  while (str[i])
    i++;
  return (i);
}

char *ft_strdup(char *str)
{
  char *ret;
  int i = 0;

  if (!(ret = (char *)malloc(sizeof(char) * ft_strlen(str) + 1)))
    return (NULL);
  while (str[i])
  {
    ret[i] = str[i];
    i++;
  }
  ret[i] = '\0';
  return (ret);
}

int nbr_len(int value)
{
  int ret = 0;
  if (value == 0)
    return (1);
  if (value < 0)
    ++ret;
  while (value != 0)
  {
    value = value / 10;
    ++ret;
  }
  return (ret);
}

char *ft_itoa(int nbr)
{
  char *ret;
  char *spe = "0123456789";
  int len = nbr_len(nbr);
  int neg;
  long cpy_value;

  if (nbr == -2147483648)
    return (ft_strdup("-2147483648"));
  cpy_value = nbr;
  neg = cpy_value < 0 ? 1 : 0;
  cpy_value = cpy_value < 0 ? -cpy_value : cpy_value;
  if (!(ret = (char *)malloc(sizeof(char) * len + 1)))
    return (NULL);
  ret[len] = '\0';
  while (--len)
  {
    ret[len] = spe[cpy_value % 10];
    cpy_value = cpy_value / 10;
  }
  ret[len] = neg ? '-' : spe[cpy_value % 10];
  return (ret);
}

int main(void)
{
  printf("%s", ft_itoa(-2147483648));
  return (0);
}
