int strlenght(char *str)
{
    int i = 0;
    while(str[i] != '\0')i++;
    return(i);
}
char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int i  = 0;
    int i_dest = strlenght(dest);
    while((unsigned)i < nb && src[i] != '\0')
    {
        dest[i_dest] = src[i];
        i++;
        i_dest++;
    }
        dest[i_dest] = '\0';
    return(dest);

}
int main()
{
    char dest[50] = "hello anas";
    char src[50] = "kiff dayer";
    ft_strncat(dest,src,4);
}