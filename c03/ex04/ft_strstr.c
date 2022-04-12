#include<stdio.h>
int lenght(char *to_find)
{
    int i = 0;
    while(to_find[i] != '\0')i++;
    return(i);
}
char    *ft_strstr(char *str, char *to_find)
{
    char *p;
    int i = 0;
    int i_to_find =  0;
    while (str[i] !=  '\0')
    {
        if(str[i] == to_find[i_to_find])i_to_find++;
        
        if(to_find[i_to_find] == '\0') 
        {
                p = &str[i - (lenght(to_find)-1)];
                return(p);
        }
        i++;
        if(str[i] != to_find[i_to_find] && to_find[i_to_find] != '\0')i_to_find = 0;
    }
    return(0);
}
int main()
{
    char dest[] = "hello anas whache nta hani ";
    char src[] = "che";
    printf("%s",ft_strstr(dest,src));
    
}