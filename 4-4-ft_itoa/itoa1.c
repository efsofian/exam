#include <stdlib.h>
#include <stdio.h>


int ft_strlen(char *str)
{
  int i = 0;
  while (str[i])
    i++;
  return (i);
}

char *ft_strdup(char *str)
{
  int i = 0;
  char *ret;
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

  if(value < 0)
    ++ret;
  while (value != 0)
  {
    value = value / 10;
    ++ret;
  }
  return (ret);
}

char *ft_itoa_base(int value)
{
  char *ret;
  int neg;
  int value_cpy;
  int len;

  len = nbr_len(value);
  if (value == -2147483648)
    return (ft_strdup("-2147483648"));
  neg = value < 0 ? 1 : 0;
  value = value < 0 ? -value : value;
  if (!(ret = (char *)malloc(sizeof(char) * len + 1)))
    return (NULL);
  ret[len] = '\0';
  while (--len)
  {
    ret[len] = value % 10 + '0';
    value = value / 10;
  }
  ret[len] = neg ? '-' : value % 10 + '0';
  return (ret);
}

int main(void)
{
  printf("%s", ft_itoa_base(-222));
  return (0);
}
