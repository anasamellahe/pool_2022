#include<stdio.h>
int ft_iterative_factorial(int nb)
{
    int fac = nb-1;
    if(nb <= 0 || nb > 12)
        return(0);
    if(nb == 1)
        return(1);
    while (fac > 0)
    {
        nb = nb  * fac;
        fac--;
    }
    return(nb);
}
int main ()
{
    printf("%d",ft_iterative_factorial(1)); 
}