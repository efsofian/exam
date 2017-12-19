#include <stdio.h>
#include <strings.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  if (argc != 4)
  {
    printf("bye");
    return (0);
  }
  else
  {
    int r = 0;
    if (argv[2][0] == '+')
      return (printf("%d", atoi(argv[1]) + atoi(argv[3])));
    else if (argv[2][0] == '-')
      return (printf("%d", atoi(argv[1]) - atoi(argv[3])));
    else if (argv[2][0] == 'x')
      return (printf("%d", atoi(argv[1]) * atoi(argv[3])));
    else if (argv[2][0] == '%')
      return (printf("%d", atoi(argv[1]) % atoi(argv[3])));
    else
      printf("error somehwere");
  }
  return (0);
}
