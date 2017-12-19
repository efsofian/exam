#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str)
{
  int i = 0;
  while (str[i])
    i++;
  return (i);
}

char *ft_strrev(char *str)
{
  char *ret;
  int x = ft_strlen(str);
  int i = 0;

  if(!(ret = (char *)malloc(sizeof(char) * ft_strlen(str) + 1)))
    return NULL;
  ret[x] = '\0';
  while (str[i])
  {
    ret[i] = str[x - 1];
    i++;
    x--;
  }
  return (ret);
}

int main(int argc, char **argv)
{
  if (argc != 2)
  {
    write (1, "\n", 1);
    return (0);
  }
  char *wesh = ft_strrev(argv[1]);
  printf("%s", wesh);
  return (0);
}
