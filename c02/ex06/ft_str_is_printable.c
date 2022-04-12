int ft_str_is_printable(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        if (str[i] < 32 || str[i] > 127)
        return(0);
        i++;
    }
    return(1);
}
int main(void)
{
    char str[];
    int i = ft_str_is_printable(str); 
}
