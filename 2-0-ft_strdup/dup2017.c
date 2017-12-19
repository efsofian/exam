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
  char * ret;

  if (!(ret = (char *)malloc(sizeof(char) * ft_strlen(str) + 1)))
    return NULL;

  while (str[i])
  {
    ret[i] = str[i];
    i++;
  }
  ret[i] = '\0';
  return (ret);
}

int main(int argc, char **argv)
{
  printf("%s", ft_strdup(argv[1]));
  return (0);
}
