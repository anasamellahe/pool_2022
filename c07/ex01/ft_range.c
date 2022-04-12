#include<stdlib.h>
int *ft_range(int min, int max)
{ 
    int* p;
    int i;

    i = 0;
    if (min >= max)
        return(0);
    p =  (int *)malloc(sizeof(int) * (max - min));
    if(p == 0)
        return(p);
    while (min < max)
    {
        p[i] = min;
        i++;
    }
}

int main ()
{
    ft_range(-10, 10); 

}