#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int x;
	float y;
}fuel;

static void scandata(fuel *car)
{
	scanf("%d %f", &car->x, &car->y);
}

static float average(fuel *car)
{
	return car->x/car->y;
}

int main ()
{
	fuel *car = malloc(sizeof(fuel));
	scandata(car);
	printf("%.3f km/l\n", average(car));
	free(car);

	return 0;
}
