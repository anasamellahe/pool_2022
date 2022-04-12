#include<unistd.h>
void ft_putchr(char c)
{
    write(1,&c,1);
}
void ft_putnbr(int nb)
{
    char ar[10];
    int i = 0;
    int d;
    char isn ='-';
     if (nb < 0 )
        ft_putchr(isn);
    while (nb != 0 )
    {
        d = nb % 10;
        if (d < 0)
        d = d * -1;
        nb = nb / 10;
        ar[i] = d + 48;
        i++;

    }
    i = i -1;
    while (i >= 0)
    {
        char a;
        a = ar[i];
        ft_putchr(a);
        i--;
    }
}
int main (void)
{
    ft_putnbr(2147483647);
}