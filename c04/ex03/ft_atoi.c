#include<stdio.h>
int ft_sig(char *str, int *i_atoi)
{
    int i = 0;
    int a = 1;
    if (str[i] == '\t'|| str[i] == '\n' || str[i] == '\v' || str[i] == ' ' || str[i] == '\f' || str[i] == '\r')
        i++;
    while(1)
    {
        if(str[i] == '-')
            a = a * (-1);
        if(str[i] == '+')
            a = a * 1; 
        if(str[i] != '-' && str[i] != '+')
        {
            *i_atoi = i;
            return(a);
        }
        i++;
    }
}
int ft_atoi(char *str)
{
    int i;
    int strtoint;
    int sig = ft_sig(str,&i);
    if(str[i] >= '0' && str[i] <= '9' )
    {
        strtoint = str[i] - 48 ;
        i++;
    }

    while(1)
    {
        if(str[i] >= '0' && str[i] <= '9' )
            strtoint = strtoint * 10 +(str[i] - 48);
        else
            return(strtoint * sig);
        i++;
    }
}
int main ()
{
    char str[] =" ---+-+1ab567";
    printf("%d",ft_atoi(str));
}