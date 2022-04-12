char *ft_strcpy(char *dest, char *src)
{
    int i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = src[i];
    return(dest);
}
int main(void)
{
    int i = 0;
    char dest[6];
    char src[] = "hello";
    ft_strcpy(dest,src);
    while(dest[i] != '\0')
    {
      write(1,&dest[i],1);
      i++;
    }

}