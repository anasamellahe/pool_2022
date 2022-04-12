#include<unistd.h>
void ft_putchar(char c)
{
    write(1,&c,1);
}
int main(int argc,char *argv[])
{
    int j = argc -1;
    int i;
    while(j > 0)
    {
        i = 0;
        while(argv[j][i] != '\0')
        {
            ft_putchar(argv[j][i]);
            i++;
        }
        j--;
        ft_putchar('\n');
    }
}