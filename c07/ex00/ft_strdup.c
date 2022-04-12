#include<stdlib.h>
#include<unistd.h>
int leng(char *str)
{
    int i = 0;
    while (str[i] != '\0')i++;
    return(i);
}
char *strcpy(char* src,char* dest)
{
    int i;
    i = 0;
    while(src[i] != '\0' || dest[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return(dest);
}
char *ft_strdup(char *src)
{
    int size = leng(src); 
    char *dup;
        dup = (char *)malloc( sizeof(char) * size);
        if (dup == 0)
            return(dup);
        strcpy(src,dup);
        return(dup);
}
int main()
{
    char *p = "hellokjfkbfhafakjgfziugzjfgbnbcznjgff fjz éiuhffuhiutg";
    char *dest = ft_strdup(p); 
    while(*dest != '\0')
    {
        write(1,dest,1);
        dest++;
    }
    write(1,"\n",1);
    dest = ft_strdup(p);
    //free(dest);
    while(*dest != '\0')
    {
        write(1,dest,1);
        dest++;
    }
}