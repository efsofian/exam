#include <unistd.h>

int braclose(char *str, char c, int i, int b)
{
  while (b && *(++str) && (i++))
    if (*str == c)
      b++;
    else if (*str == (c == '(' ? ')' : c + 2))
      b--;
  return (i);
}

int bracket(char *str, char c)
{
  if (*str == c)
    return (1);
  else if (!*str)
    return (0);
  else if (*str == ']' || *str == ')' || *str == '}')
    return (0);
  else if (*str == '(' || *str == '[' || *str == '{')
    return (bracket(str + 1, (*str == '(' ? ')' : *str + 2)) * bracket(str + braclose(str, *str, 1, 1), c));
  else
    return (bracket(str + 1, c));
}

int main(int argc, char **argv)
{
  int i = 1;
  if (argc > 1)
  while (i < argc)
  {
    if (bracket(argv[i], 0))
      write (1, "OK\n", 3);

    else
      write (1, "ERROR\n", 6);
    i++;
  }

  return (0);
}
