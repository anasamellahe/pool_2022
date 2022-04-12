int  ft_strlen(char *str)
{
    int i = 0;
    while (*str != '\0')
    {
        str++;
        i++;
    }
    return(i);
    
}
int main ()
{
    char str[] = "hello";
    ft_strlen(str);

}