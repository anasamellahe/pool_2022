void ft_swap(int *a, int *p)
{
    int swap;
    swap = *a;
    *a = *p;
    *p = swap;  
}
int main()
{
    int a;
    int p;
    ft_swap(&a, &p);
}