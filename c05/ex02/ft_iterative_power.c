#include<stdio.h>
int ft_iterative_power(int nb, int power)
{
  int pow = nb; 
    if(power == 0)
        return(1);
    if(power < 0)
        return(0);
    while(power-1 > 0)
    {
        nb = nb*pow;
        power--;
    }
    return(nb);
}
int main()
{
    printf("%d",ft_iterative_power(10,5));
}