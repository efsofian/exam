#include <unistd.h>

int main(void)
{
  write (2, "a\n", 2);
  return (0);
}
