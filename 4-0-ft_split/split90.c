#include <stdlib.h>

int ispace(char c)
{
  if (c == ' ' || c == '\t')
    return (1);
  return (0);
}

int nbrword(char *str)
