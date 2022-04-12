#include<stdio.h>
int ft_find_next_prime(int nb)
{
    int n = 2, b;
    if(nb < 2)
        return(2);
    while(1)
    {
        b = 0;
        while(n < nb)
        {
            if(nb%n == 0)
            {
                b = 1;
                break;
            }
            n++;

        }
        if(b == 0)
            return(nb);
        nb++;
    }
}
int main ()
{
    printf("%d",ft_find_next_prime(4));
}