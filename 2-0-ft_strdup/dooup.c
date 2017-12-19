#include <stdlib.h>

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
  int i;
  char *temp;

  i = 0;
  if (!(temp = (char *)malloc(sizeof(char) * ft_strlen(str) + 1)))
    return (NULL);

  while (str[i])
  {
    temp[i] = str[i];
    i++;
  }
  temp[i] = '\0';
  return (temp);
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
