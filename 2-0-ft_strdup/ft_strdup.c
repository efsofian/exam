#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_strlen(char *str)
{
  int i;

  i = 0;
  while (str[i])
  i++;
  return (i);
}

char *ft_strdup(char *src)
{
  char *mdr;
  int i;
  i = 0;

if (!(mdr = (char *)malloc(sizeof(char) * ft_strlen(src) + 1)))
  return (NULL);
  while (src[i])
  {
    mdr[i] = src[i];
    i++;
  }
  mdr[i] = '\0';
  return (mdr);
}

int main(void)
{
  char MDR[] = "salut";
  char *MDR2;
  MDR2 = ft_strdup(MDR);
  printf("%s", MDR2);
  return (0);
}
