  #include <unistd.h>
#include <stdio.h>
#include <strings.h>

int main(int argc, char **argv)
{
  if (argc != 2)
  {
    write (1, "\n", 1);
    return (0);
  }
  else
  {
    if (atoi(argv[1] <= 0))
    {
      write (1, "\n", 1);
      return (0);
    }
    else
    {
      int nbr = atoi(argv[1]);
      int i = 2;
      int temp;
      while (i < nbr)
      {
        if (nbr % i == 0)
        {
          temp = i;
          printf("%d*", temp);
          nbr = nbr / temp;
          i = 1;
        }
        i++;
      }
      if (nbr != 0)
      {
        printf("%d", nbr);
      }
      return (0);
    }
  }
}
