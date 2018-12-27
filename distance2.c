#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int x, y, a;
}coor;

static int calc(coor *car)
{
	scanf("%d", &car->a);

	return (car->x * car->a)/30;
}

int main()
{
	coor *car = malloc(sizeof(coor));	
	
	car->x = 60;
	car->y = 90;

	printf("%d minutos\n", calc(car));

	free(car);

	return 0;
}
