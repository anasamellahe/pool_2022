#include<unistd.h>
void ft_putchar(char c)
{
    write( 1, &c, 1);
}
void ft_print_numbers(void)
{
    int numbers = 0;
    char numtochhar;
    while( numbers <= 9){
        numtochhar = numbers + 48;
        ft_putchar(numtochhar);
        numbers++;
    }
}
int main()
{
    ft_print_numbers();
}