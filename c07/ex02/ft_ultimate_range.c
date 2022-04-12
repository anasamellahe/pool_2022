#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*p;
	int	i;
	int	minn;

	i = 0;
	minn = min;
	if (min >= max)
	{
	*range = NULL;
		return (0);
	}
	p = (int *)malloc (sizeof(int) * max - min);
	if (p == NULL)
		return (-1);
	while (i < max - min)
	{
	p[i] = minn;
	i++;
	minn++;
	}
	*range = p;
	return (max - min);
}

int	main(void)
{
	int	*p;

	p = NULL;
	ft_ultimate_range (&p, 1, 24);
}
