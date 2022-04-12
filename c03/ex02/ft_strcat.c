int linght(char *dest)
{
    int i = 0;
    while(dest[i] != '\0')i++;
    return(i);
}
char *ft_strcat(char *dest, char *src)
{
    int i = 0;
    int i_dest = linght(dest);
    while (src[i] != '\0' )
    {
        dest[i_dest] = src[i];
        i++;
        i_dest++;
    }

    return(dest);
}
int main()
{
    char dest[50] ="hello anas";
    char src[50]  ="kife dayer";
    ft_strcat(dest,src);

}