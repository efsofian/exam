void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i;
	 int temp;

	i = 1;
	if (size != 0)
	{

	while (i <= size)
	{
		if (tab[i] < tab[i - 1])
		{
			temp = tab[i];
			tab[i] = tab[i - 1];
			tab[i - 1] = temp;
			i = 0;
		}
		++i;
	}
}
}

int main(void)
{
    int tab[10];
    int i = 0;

    tab[0] = 9;
    tab[1] = 2;
    tab[2] = 4;
    tab[3] = 3;
    tab[4] = 3;
    tab[5] = 0;
    tab[6] = 1;
    tab[7] = 7;
    tab[8] = 5;
    tab[9] = 6;
    sort_int_tab(tab, 9);
    while (i <= 9)
        printf("%d\n", tab[i++]);
    return (0);
}
