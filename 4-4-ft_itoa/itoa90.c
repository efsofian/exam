#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
  write (1, &c, 1);
}

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

int nbrlen(int value)
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

char *ft_itoa(int value)
{
  if (value == -2147483648 )
    return (ft_strdup("-2147483648"));

  int neg;
  int cpyvalue = value;
  neg = cpyvalue < 0 ? 1 : 0;
  cpyvalue = cpyvalue < 0 ? -cpyvalue : cpyvalue;
  char *ret;
  int len = nbrlen(value);

  if (!(ret = (char *)malloc(sizeof(char) * len + 1)))
    return (NULL);
  ret[len] = '\0';
  while (--len)
  {
    ret[len] = cpyvalue % 10 + '0';
    cpyvalue = cpyvalue / 10;
  }
  ret[len] = neg ? '-' : cpyvalue % 10 + '0';
  return (ret);
}

int main(int argc, char **argv)
{
  int x = 2147483647;
  printf("%s", ft_itoa(x));
  return (0);
}
