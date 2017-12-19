#include <unistd.h>

int main(int argc, char **argv)
{
  if (argc != 2)
  {
    write (1, "\n", 1);
    return (0);
  }
  int i = 0;
  int val = 0;
  int space = 0;

  while (argv[1][i])
  {
    if (argv[1][i] != ' ' && (space == 0 || space == 1) && (val == 0 || val == 1))
    {
      val = 1;
      write (1, &argv[1][i], 1);
      i++;
    }
    else if (argv[1][i] == ' ' && val == 0 && space == 0)
    {
      space = 1;
      write (1, &argv[1][i], 1);
      i++;
    }
    else if (argv[1][i] != ' ' && space == 1)
    {
      write (1, &argv[1][i], 1);
      i++;;
    }
    else if (argv[1][i] == ' ' && val == 1 && space == 1)
      break;
  }
  write (1, "\n", 1);
  return (0);
}
