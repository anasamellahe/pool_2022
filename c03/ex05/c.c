#include<stdio.h>
#include<string.h>
int main()
{
    char dest[20] = "hello anas";
    char src[] = "amellahe kifaxe dayer";
    unsigned int a = strlcat(dest,src,20);
    printf("%d  \n %s",a,dest);
}
