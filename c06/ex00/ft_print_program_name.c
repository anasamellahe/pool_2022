#include<unistd.h>
#include<stdio.h>
void ft_putchar(char c)
{
    write(1,&c,1);
}
int main(int argc, char *argv[])
{
    (void)argc;
    int i = 0;
    while(argv[0][i] != '\0')
    {
        ft_putchar(argv[0][i]);
        i++;
    }
    ft_putchar('\n');
}