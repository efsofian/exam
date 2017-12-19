#include <stdio.h>

int ft_strcmp(char *str1, char *str2)
{
  int i;

  i = 0;

  while (str1[i] && str2[i])
   {
     if (str1[i] != str2[i])
      return (str1[i] - str2[i])
     i++;
   }
   return (str1[i] - str2[i]);
}

int main(int argc, char **argv)
{
  char x[3] = "s";
  char y[3] = "sd";
  printf("le vrai strcmp:%d\nmon strcmp:%d\n", strcmp(x, y), ft_strcmp(x, y));
  return (0);
}
