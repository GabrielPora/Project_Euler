#include <stdio.h>
#include <stdlib.h>

void	calculate_possible_castles_Row1(int w, int h)
{
	int	i = 1;
	int	j = 2;
	int	first = w;
	int	ndlast = w;
	int	last = 1;
	int	Sn;
	int	Sn2;
	int	x;
	int	y;
	int	n = w - 1;
	int	test = 4;
	long	int	sum = 0;
	int	rowt = 0;

	Sn = n*(1+n)/2;

	if (w - test < 0)
	{
		sum = first+Sn+ndlast+last;
	}
	else if (w-test == 0)
	{
		Sn = n*(1+n)/2;
		sum = first+Sn+ndlast+last;
	}
	else
	{
		Sn = n*(1+n)/2;
		printf("Sn = %d\n", Sn);
		printf("n = %d\n", n);
		while (w - j > 2)
		{
			printf("run through = %d \n", i);
			x = n - j;
			Sn2 = (x*(1+x)/2) * j;
			y = w - j;
			sum = sum+Sn2+y;
			rowt = Sn2+y;
			printf("Row total = %d for %d blocks \n", rowt, j+1);
			printf("x = %d \n", x);
			printf("Sn2 = %d \n", Sn2);
			printf("y = %d \n", y);
			printf("Sum = %ld \n", sum);
			j++;
			i++;
		}
		sum = sum+first+Sn+ndlast+last;
	}

	printf("Total possibilities are: %ld \n", sum);
}

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Missing numbers");
		return (0);
	}
	int	w;
	int	h;

	w = atoi(argv[1]);
	h = atoi(argv[2]);
	printf("width number %d",w);
	printf("\n");
	printf("height number %d",h);
	printf("\n");	
	calculate_possible_castles_Row1(w, h);
	printf("\n");

	return (0);
}
