#include<stdio.h>
int ft_strlen(char *des)
{
    int i =   0;
    while(des[i] != '\0')i++;
    return(i);
}
unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    int size_f = ft_strlen(dest) + ft_strlen(src);
    int i = ft_strlen(dest);
    int i_src = 0;
    while((unsigned)i < size-1)
    {
        
        dest[i] = src[i_src];
        i++;
        i_src++;
    }
    return((unsigned)size_f);
}
int main()
{
    char dest[11] = "hello anas";
    char src[] = "amellahe kifaxe dayer";
    unsigned int a = ft_strlcat(dest,src,11);
    printf("%d  \n %s",a,dest);
}
