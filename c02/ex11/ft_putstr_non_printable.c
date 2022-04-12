#include<unistd.h>
int glo = 0;
void conv(int con)
{
    char hex[] = "0123456789abcdef";
    if(con % 16 == 0)
        if (glo <= 1)
          write(1,&hex[con % 16],1);
    if ( con % 16 != 0)
    {
        glo++;
        conv(con / 16);
        write(1,&hex[con % 16],1);
    }
}
void ft_putstr_non_printable(char *str)
{
    int i = 0;
    int dec;
    char back  = '\\';
    while (str[i] != '\0')
    {
        if (str[i] >= 0  && str[i] <= 31)
        {
            write (1 ,&back,1);
            dec = str[i];
            conv(dec);
            i++;
        }
        write(1,&str[i],1);
        i++;
    }
}
int main (void)
{
    char str [] = "Coucou\ntu vas bien ?";
    ft_putstr_non_printable(str);
    
}