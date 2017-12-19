#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str)
{
  int i = 0;
  while (str[i])
    i++;
  return (i);
}

char *ft_strdup(char *src)
{
  int i = 0;
  char *ret;

  if (!(ret = (char *)malloc(sizeof(char) * ft_strlen(src) + 1)))
      return NULL;
  while (src[i])
  {
    ret[i] = src[i];
    i++;
  }
  ret[i] = '\0';
  return (ret);
}

int main(int argc, char **argv)
{
  if (argc != 2)
  {
    return (0);
  }
  else
  {
    char *yo = ft_strdup(argv[1]);
    printf("%s", yo);
    return (0);
  }
}
