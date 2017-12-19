#include <stdlib.h>

int ft_strlen(char *str)
{
  int i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}

char *ft_strdup(char *str1)
{
  char *ret;

  if (!(ret = (char *)malloc(sizeof(char) * ft_strlen(str1) + 1)))
      return (NULL);
  int i;

  i = 0;
  while (str1[i])
  {
    ret[i] = str1[i];
    i++;
  }
  ret[i] = '\0';
  return (ret);
}

char	*ft_itoa_base(int value, int base)
{
	char baseo[16];
	baseo[0] = '0';
	baseo[1] = '1';
	baseo[2] = '2';
	baseo[3] = '3';
	baseo[4] = '4';
	baseo[5] = '5';
	baseo[6] = '6';
	baseo[7] = '7';
	baseo[8] = '8';
	baseo[9] = '9';
	baseo[10] = 'A';
	baseo[11] = 'B';
	baseo[12] = 'C';
	baseo[13] = 'D';
	baseo[14] = 'E';
	baseo[15] = 'F';
	int conv[64];
	int i = 0;
	int n = value;
	char *result;

  if (value == -2147483648)
    return (ft_strdup("-2147483648"));
	else if (value < 0)
		value = -value;

	while (value != 0)
	{
		conv[i] = value % base;
		value = value / base;
		i++;
	}
	i--;
	result = (char *)malloc(sizeof(char) * i + 1);
	if (n < 0)
	{
		result[0] = '-';
		n = 1;
	}
	else
		n = 0;;
	while (i >= 0)
	{
		result[n] = baseo[conv[i]];
		i--;
		n++;
	}
  result[n] = '\0';
	return (result);
}

int main(void)
{
  int x = -21;
  int y = 10;
  printf("%s", ft_itoa_base(x, y));
  return (0);
}
