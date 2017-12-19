#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2)
{
  while (*s1 && *s2)
  {
    if (*s1 ==  *s2)
    {
      s1++;
      s2++;
    }
    return (*s1 - *s2);
  }
  return (*s1 - *s2);
}

int main(int argc, char **argv)
{
  char x[3] = "s";
  char y[3] = "sd";
  printf("le vrai strcmp:%d\nmon strcmp:%d\n", strcmp(x, y), ft_strcmp(x, y));
  return (0);
}
