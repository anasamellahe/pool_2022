#include<unistd.h>
#include<stdio.h>
void    ft_putchr(char c)
{
    write(1,&c,1);
}
int ft_com(char* a, char* p)
{
    int i = 0;
    while(a[i] != '\0' && a[i] == p[i] )
        i++;
    
    return( a[i] - p[i]);
}
 void ft_swap(int* a, int* p)
 {
     int tos = *a;
     *a = *p;
     *p = tos;
 }
int main(int argc,char* argv[])
{
    int i = 0,j,k,h;
    int arg[argc];
    while (i < argc)
    {
        arg[i] = i;
        i++;
    }
    i = 1;
    while(i < argc  )
    {
        j = i+1;
        while (j < argc)
        {
            if(ft_com(argv[arg[i]] , argv[arg[j]]) > 0)
                ft_swap(&arg[i],&arg[j]);
            j++;
        }
        i++;
    }

    i = 1;
    while(i < argc )
    {
        k = 0;
        while (argv[arg[i]][k] != '\0')
        {
            ft_putchr(argv[arg[i]][k]);
            k++;
        }
        ft_putchr('\n');
        i++;
    }
    return(0);
}
