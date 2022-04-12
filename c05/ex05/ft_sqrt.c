#include<stdio.h>
int ft_sqrt(int nb)
{

    int sig  = 1;
    if(nb < 0)
    {
        nb = nb * -1;
        sig *=-1;
    } 
    if(nb == 0)
        return(0);
    if(nb == 1)
        return(1 * sig);
    int n = 0;
    while(1)
    {
        if(n*n > nb)
            return 0;
        if(n*n == nb)
            return(n * sig);
        n++;
    }
}
int main ()
{
    printf("%d",ft_sqrt(-1));
}