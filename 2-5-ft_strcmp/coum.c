int    ft_strcmp(char *s1, char *s2)
{
  int i;

  i = 0;
  while (s1[i] && s2[i])
  {
    if (s1[i] != s2[i])
      return (s1[i] - s2[i]);
    i++;
  }
  return (s1[i] - s2[i]);
}

int main(int argc, char **argv)
{
  char x[3] = "s";
  char y[3] = "sd";
  printf("le vrai strcmp:%d\nmon strcmp:%d\n", strcmp(x, y), ft_strcmp(x, y));
  return (0);
}
