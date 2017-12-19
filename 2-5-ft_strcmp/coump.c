int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 && *s2 && (unsigned char)*s1 == (unsigned char)*s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

int main(int argc, char **argv)
{
  char x[3] = "s";
  char y[3] = "sd";
  printf("le vrai strcmp:%d\nmon strcmp:%d\n", strcmp(x, y), ft_strcmp(x, y));
  return (0);
}
