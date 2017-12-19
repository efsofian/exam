#include <unistd.h>
#include <stdlib.h>

void ft_putchar(char c)
{
  write (1, &c, 1);
}

void ft_putstr(char *str)
{
  int i = 0;
  while (str[i])
  {
    ft_putchar(str[i]);
    i++;
  }
}

int ft_strlen(char *str)
{
  int i = 0;
  while (str[i])
    i++;
  return (i);
}

int ECHEC(void)
{
  ft_putstr("ECHEC NEGRO");
  return (0);
}
int main(int argc, char **argv)
{
  if (argc <= 1)
  {
    write (1, "\n", 1);
    return (0);
  }
  int i = 0;
  int j;
  int size = ft_strlen(argv[1]);
  int **map;

  if (!(map = (int **)malloc(sizeof(int *) * size)))
    return (NULL);

  while (i < size)
  {
    map[i] = (int *)malloc(sizeof(int) * size);
    i++;
  }

  i = 1;
  int z = 0;

  while (argv[i])
  {
    j = 0;
    while (argv[i][j])
    {
      map[z][j] = argv[i][j];
      j++;
    }
    i++;
    z++;
  }
  unsigned int a = 0;
  unsigned int b;



  while (map[a])
  {
    b = 0;
    while (map[a][b])
    {
      if (map[a][b] == 'F')
      {
        if (map[a - 1][b - 1] && map[a - 1][b - 1] == 'F' || map[a + 1][b + 1] && map[a + 1][b + 1] == 'F')
          return (ECHEC());
      }
      b++;
    }
    a++;
  }
  return (0);
}
