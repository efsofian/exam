#include <stdio.h>

int ft_strcmp(char *str1, char *str2)
{
  int i = 0;
  while (str1[i] && str2[i])
  {
    if (str1[i] != str2[i])
      return (str1[i] - str2[i]);
    i++;
  }
  return (str1[i] - str2[i]);
}

int main(void)
{
  char MDR1[] = "abc";
  char MDR2[] = "abc";
  printf("%d", ft_strcmp(MDR2, MDR1));
  return (0);
}
