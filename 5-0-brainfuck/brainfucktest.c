#include <unistd.h>

unsigned char mem[4096] = {0};
unsigned char *memp = mem;

void ft_brainfuck(char *str)
{
  int i = 0;
  int loop;

  while (str[i])
  {
    if (str[i] == '+')
      ++*memp;
    else if(str[i] == '-')
      --*memp;
    else if(str[i] == '>')
      ++memp;
    else if(str[i] == '<')
      --memp;
    else if (str[i] == '.')
      write (1, memp, 1);
    else if (str[i] == '[' && *memp == 0)
    {
      loop = 1;
      while (loop != 0)
      {
        ++i;
        if (str[i] == '[')
          ++loop;
        else if (str[i] == ']')
          --loop;
      }
    }
   else if (str[i] == ']' && *memp != 0)
   {
     loop = 1;
     while (loop != 0)
     {
     --i;
     if (str[i] == ']')
      ++loop;
     else if (str[i] == '[')
      --loop;
    }
   }
   ++i;
  }
}

int main(int argc, char **argv)
{
  if (argc == 2)
  {
    ft_brainfuck(argv[1]);
  }
  return (0);
}
