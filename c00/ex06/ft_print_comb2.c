#include<unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
void ft_print_comb2(void)
{
    int first = 0;
    int second;
    char numtochar;
    char s = ' ';
    char c = ',';
    while (first <= 99 )
    {
        second = first + 1;
        while (second <= 99)
        { 
            numtochar = (first / 10) + 48;
            ft_putchar(numtochar);
            numtochar = (first % 10) + 48;
            ft_putchar(numtochar);
            ft_putchar(s);
            numtochar = (second / 10) + 48;
            ft_putchar(numtochar);
            numtochar = (second % 10) + 48;
            ft_putchar(numtochar);
            ft_putchar(c);
            ft_putchar(s);
            second++;
        }
        first++;
    }
   
}
int main(void)
{
    ft_print_comb2();
}