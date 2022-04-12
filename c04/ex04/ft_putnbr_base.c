#include<unistd.h>
void ft_putchar(char c)
{
    write(1,&c,1);
}
int check_base(char *base)
{

    int i = 0;
    int j ; 
    if(base[0] == '\0')
        return(0);
    while(base[i] != '\0')
    {
        j = i+1;
        while(base[j] != '\0')
        {
            if(base[i] == base[j])
                return(0);
            if (base[i] == '+' || base[i] == '-')
                return(0);
            j++;
        }
        i++;
    }
    if(i ==  1)
        return(0);
    return(i);
}
void    ft_putnbr_base(int nbr, char *base)
{
    char con[100];
    int i = 0;
    long int nbr_2 = nbr;
    int bas = check_base(base);
    if(bas ==  0)
        return;
    if (nbr_2 < 0)
    {
        nbr_2 = nbr_2 * (-1);
        ft_putchar('-');
    }
    while(nbr_2 > 0)
    {
        con[i] =  base[nbr_2 % bas];
        nbr_2 = nbr_2 / bas;
        i++;
    }
    i--;
    while(i >= 0)
    {
        ft_putchar(con[i]);
        i--;
    }
}
int main ()
{
    char  base[] =  "0123456789ABCDEF";
    int nbr = -2147483648;
    ft_putnbr_base(nbr,base);
}