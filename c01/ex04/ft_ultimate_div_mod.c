void ft_ultimate_div_mod(int *a, int *b)
{
    int swap;
    swap = *a;
    *a = *a / *b;
    *b = *b % swap;
}
int main()
{
    int a = 9;
    int b = 2;
    ft_ultimate_div_mod(&a, &b);
}