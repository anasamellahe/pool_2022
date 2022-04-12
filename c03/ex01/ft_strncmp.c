#include<stdio.h>
int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    int i = 0;
    while((unsigned)i < n && (s1[i] != '\0'|| s2[i] != '\0'))
    {
        if(s1[i] > s2[i])
            return(1);
        if(s1[i] < s2[i])
            return(-1);
        i++;
    }
    return(0);
}
int main()
{
    char s1[] = "hello anashgiihiugff";
    char s2[] = "hello anas";
    int i = ft_strncmp(s1,s2,12);
    printf("%d",i);

}