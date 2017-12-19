int ft_strlen(char *str)
{
  int i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}

char *ft_strrev(char *str)
{
  int i = 0;
  int j = ft_strlen(str) - 1;
  int k = 0;
  char temp[ft_strlen(str)];

  while (str[i])
  {
    temp[i] = str[j];
    i++;
    j--;
  }
  while (str[k])
  {
    str[k] = temp[k];
    k++;
  }
  return (str);
}

int main(int argc, char **argv)
{
  if (argc != 2)
  {
    return (0);
  }
  else
  {
    printf("%s", ft_strrev(argv[1]));
    return (0);
  }
}
