#include<stdio.h>
int ft_strcmp(char *s1, char *s2)
{
    int s_1 = 0;
    int s_2 = 0;
    while (s1[s_1] != '\0' || s2[s_2]  != '\0')
    {
        if(s1[s_1] > s2[s_2])
            return(1);
        if(s1[s_1] < s2[s_2])
            return(-1);
        s_2++;
        s_1++;
    }
   /* while (s2[s_2] != '\0' )
    {
        if(s1[s_1] > s2[s_2])
            return(1);
        if(s1[s_1] < s2[s_2])
            return(-1);
        if(s1[s_1] != '\0') 
            s_1++;
        s_2++;
    }*/
    return(0);
}
int main()
{
    char s1[] = "hello anasHHHAhu";
    char s2[] = "hello anas";
    int i = ft_strcmp(s1,s2);
    printf("%d",i);

}