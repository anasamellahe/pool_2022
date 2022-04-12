void ft_rev_int_tab(int *tab, int size)
{
    int i = 0;
    int j = size -1;
    int swap;
    while (i <= j)
    {
        swap = tab[i];
        tab[i] = tab[j];
        tab[j] = swap;
        i++;
        j--;
    }

}
int main (void)
{
    int array[] = {1,2,3,4,5};
    int size = 5;
    ft_rev_int_tab(array,size);
    return;
}