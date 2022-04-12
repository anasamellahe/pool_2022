char *ft_strupcase(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        if (str[i] >= 97 && str[i] <= 122)
            str[i] = str[i] - 32;
        i++;
    }
    return(str);
}
int main (void)
{
    char str[] = "Gqhjj12;/JhsGG";
    ft_strupcase(str);
}