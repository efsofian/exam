void sort_int_tab(int *tab, unsigned int size)
{
  int temp;
  unsigned int i = 1;

  while (i < size)
  {
    if (tab[i] < tab[i - 1])
    {
      temp = tab[i];
      tab[i] = tab[i - 1];
      tab[i - 1] = temp;
      i = 0;
    }
    i++;
  }
}

int main(void)
{
  int tab[5] = {22, 14, 16, -2, 101};
  sort_int_tab(tab, 5);
  int i = 0;
  while (i < 5)
  {
    printf("%d\n", tab[i]);
    i++;
  }
  return (0);
}
