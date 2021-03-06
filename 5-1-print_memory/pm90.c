#include <unistd.h>

void ft_putchar(char c)
{
  write (1, &c, 1);
}

void ft_printhex(unsigned char c)
{
  char tab[16] = "0123456789abcdef";

  ft_putchar(tab[c / 16]);
  ft_putchar(tab[c % 16]);
}

void ft_print_ascii(unsigned char c)
{
  if (c >= 32 && c <= 126)
    ft_putchar(c);
  else
    ft_putchar('.');
}

void ft_print_lane(unsigned char *s, size_t start, size_t max)
{
  size_t i = start;
  while (i < start + 16 && i < max)
  {
    ft_printhex(s[i]);
    if (i % 2)
      ft_putchar(' ');
    i++;
  }
  while (i < start + 16)
  {
    write (1, "  ", 2);
    if (i % 2)
      ft_putchar(' ');
    i++;
  }
  i = start;
  while (i < start + 16 && i < max)
  {
    ft_print_ascii(s[i]);
    i++;
  }
  ft_putchar('\n');
}

void print_memory(const void *addr, size_t size)
{
  size_t i = 0;
  unsigned char *s = (char *)addr;

  while (i < size)
  {
    ft_print_lane(s, i, size);
    i += 16;
  }
}

int	main(void)
{
	int	tab[10] = {0, 23, 150, 255,
	              12, 16,  21, 42};

	print_memory(tab, sizeof(tab));
	return (0);
}
