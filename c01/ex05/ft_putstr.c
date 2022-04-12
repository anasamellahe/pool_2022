#include<unistd.h>
void ft_putstr(char *str)
{
    while (*str != '\0')
    {
        write(1, sstr, 1);
        *str++;
    }
    

}
int main (void)
{
    char str[] ="helo";
    ft_putstr(str);

}