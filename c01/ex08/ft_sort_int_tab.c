void ft_swap(int *tab , int i,int j)
{
    int swap = tab[i];
    tab[i] = tab[j];
    tab[j] = swap;
}
void ft_sort_int_tab(int *tab, int size)
{
    int i =0;
    int j = 1;
    while (1)
    {
        if (tab[i] > tab[j])
        {
            ft_swap(tab ,i,j);
            j++;
        }
        else if (tab[i] <= tab[j])
            j++;
        
        if ( j == size)
        {
            i++;
            j = i;
        }
        if ( i == size )
            break;
    }
    

}
int main( void)
{
    int size = 13;
    int array[] = {6,1,4,3,2,5,8,7,9,11,65,55,11};
    ft_sort_int_tab(array, size);
}