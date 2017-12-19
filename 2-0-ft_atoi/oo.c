int ft_atoi(char const *str)
{
  int i;
  int result;
  int indice;

  i = 0;
  result = 0;
  indice = 1;

  while (str[i] == ' ' || str[i] > 8 && str[i] < 14)
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
