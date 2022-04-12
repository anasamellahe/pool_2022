char  *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int i = 0;
    while((unsigned)i < n)
    {
        dest[i] = src[i];
        i++;
        if(src[i] == '\0' && i < n)
        {
          while((unsigned)i < n){
          dest[i] ='\0';
          i++;
          }
        }
    }
    return(dest);
}
int main(void)
{
    char dest[10];
    char src[] = "hello";
    ft_strncpy(dest,src,10);
}