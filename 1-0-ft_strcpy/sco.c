#include <stdio.h>

char *ft_strcpy(char *s1, char *s2)
{
  int i = 0;
  while (s1[i])
  {
    s2[i] = s1[i];
    i++;
  }
}

int main(int argc, char **argv)
{
  char MDR[6] = "salut";
  char MDR2[6] = "";
  printf("mdr2:%s\n", MDR2);
  ft_strcpy(MDR, MDR2);
  printf("mdr2:%s\n", MDR2);
  return (0);
}
