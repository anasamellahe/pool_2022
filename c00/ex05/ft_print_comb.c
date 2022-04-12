#include<unistd.h>
void ft_putchar(char c)
{
    write(1,&c, 1);
}
void ft_print_comp(void)
{
    int first = 0 ;
    char numtochar;
    char s =' ';
    char c =',';
    while (first <=9)
    {
        int second =  first + 1;
        while (second <= 9)
        {
            int third = second + 1;
            while (third <= 9)
            {
                numtochar = first + 48;
                ft_putchar(numtochar);
                numtochar = second + 48;
                ft_putchar(numtochar);
                numtochar  = third + 48;
                ft_putchar(numtochar);
                ft_putchar(c);
                ft_putchar(s);
                third++;             
            }
            second++;
        }
       first++;
    }
}
int main(void)
{
    ft_print_comp();
}