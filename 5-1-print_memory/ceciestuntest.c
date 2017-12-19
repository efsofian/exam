/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ceciestuntest.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <exam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 13:14:34 by exam              #+#    #+#             */
/*   Updated: 2017/03/06 17:41:25 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void putnbrhex(int octet, int rem)
{
  char baseo[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
  if (rem > 1)
    putnbrhex(octet >> 4, rem - 1);
  write (1, baseo + octet%16, 1);
}

static void sputchar(unsigned char const *ptr)
{
  char const c = *ptr;
  if (' ' <= c && c <= '~')
    write(1, ptr, 1);
  else
    write(1, ".", 1);
}

static void printnbr(const unsigned char *addr, size_t size, size_t i)
{
  int a = 0;
  while (a < 16 && a + i < size)
  {
    putnbrhex(*(addr + i + a), 2);
    if (a % 2)
      write(1, " ", 1);
    a++;
  }
  while (a < 16)
  {
    write (1, " ", 2);
    if (a % 2)
      write (1, " ", 1);
    a++;
  }
}

static void pchar(const unsigned char *addr, size_t size, size_t i)
{
  int a;

  a = 0;
  while (a < 16 && a + i < size)
  {
    sputchar(addr+a+i);
    a++;
  }
}

void	print_memory(const void *addr, size_t size)
{
  size_t i;

  i = 0;
  while (i < size)
  {
    printnbr((const unsigned char *)addr, size , i);
    pchar((const unsigned char *)addr, size, i);
    write(1, "\n", 1);
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
