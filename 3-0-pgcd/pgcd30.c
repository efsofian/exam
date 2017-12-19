int ft_atoi(char *str)
{
  int i = 0;
  int indice = 1;
  int result = 0;

  while (str[i] == ' ' || str[i] > 9 && str[i] < 14)
    i++;
  if (str[i] == '+')
    i++;
  else if (str[i] == '-')
  {
    indice = -1;
    i++;
  }
  while (str[i] >= '0' && str[i] <= '9')
  {
    result = result * 10 + str[i] - '0';
    i++;
  }
  return (result * indice);
}

int main(int argc, char **argv)
{

  if (argc != 3)
    return (0);
  int a;
  int b;
  int c;

  a = ft_atoi(argv[1]);
  b = ft_atoi(argv[2]);
  c = a % b;

  while (c)
  {
    a = b;
    b = c;
    c = a % b;
  }
  printf("%d", b);
  return (0);
}
