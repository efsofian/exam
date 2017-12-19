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
  int len = ft_strlen(str);
  char *ret;

  if (!(ret = (char *)malloc(sizeof(char) * len + 1)))
    return (NULL);
  while (str[i])
  {
    ret[i] = str[i];
    i++;
  }
  ret[i] = '\0';
  return (ret);
}

int nbrlen(int value)
{
  int ret = 0;
  if (value == 0)
    return (1);
  if (value < 0)
  {
    value = -value;
    ++ret;
  }
  while (value != 0)
  {
    value = value / 10;
    ++ret;
  }
  return (ret);
}

char *ft_itoa(int value)
{
  char *ret;
  int len;
  int cpy_value;
  int neg;

  if (value == -2147483648)
    return (ft_strdup("-2147483648"));
  len = nbrlen(value);
  cpy_value = value;
  if (!(ret = (char *)malloc(sizeof(char) * len + 1)))
    return (NULL);
  ret[len] = '\0';
  neg = cpy_value < 0 ? 1 : 0;
  cpy_value = cpy_value < 0 ? -cpy_value : cpy_value;
  while (--len)
  {
    ret[len] = (cpy_value % 10) + '0';
    cpy_value = cpy_value / 10;
  }
  ret[len] = neg ? '-' : (cpy_value % 10) + '0';
  return (ret);
}

int main(void)
{
  printf("%s", ft_itoa(2147483647));
  return (0);
}
