int		max(int* tab, unsigned int len)
{
  if (len == 0)
    return (0);
  else {
    int ret;
    int i;

    i = 0;
    ret = tab[0];
    while (i < len)
    {
      if (ret < tab[i])
      {
        ret = tab[i];
        i = 0;
      }
      i++;
    }
    return (ret);
  }
}

int main(void)
{
  int MDR[3];

  MDR[0] = 123;
  MDR[1] = 222;
  MDR[2] = 48;

  printf("%d", max(MDR, 3));
  return (0);
}
