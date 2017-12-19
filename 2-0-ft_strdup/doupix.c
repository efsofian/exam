#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str)
{
  int i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}

char *ft_strdup(char *str)
{
  char *ret;
  int i = 0;

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
  if (argc != 2)
  {
    return (0);
  }
  else
  {
    printf("%s", ft_strdup(argv[1]));
    return (0);
  }
}
