#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int a, b;
}info;

static void scandata(info *car)
{
	scanf("%d %d", &car->a, &car->b);
}

static double calc(info *car)
{
	return (car->a * car->b)/12.0;
}

int main()
{
	info *car = malloc(sizeof(info));
	scandata(car);
	printf("%.3f\n", calc(car));
	free(car);	

	return 0;
}
