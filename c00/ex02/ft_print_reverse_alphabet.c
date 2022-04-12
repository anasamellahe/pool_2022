#include<unistd.h>
void ft_putchar(char alphhabet)
{
    write(1,&alphhabet,1);
}
void ft_print_reverse_alphabet(void)
{
    char z = 'z';
    while (z >= 'a')
    {
        ft_putchar(z);
        z--;
    }
}
int main()
{
    ft_print_reverse_alphabet();
    
}