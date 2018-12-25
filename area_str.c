#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159

typedef struct {
	double x, y, z;
}Parameters;

static double Triangle (Parameters *Area)
{
	return (Area->x * Area->z)/2;
}

static double Circle (Parameters *Area)
{
	return PI * (Area->z * Area->z);
}

static double Trapezium (Parameters *Area)
{
	return ((Area->x + Area->y) * Area->z)/2;
}

static double Square (Parameters *Area)
{
	return Area->y * Area->y;
}

static double Rect (Parameters *Area)
{
	return Area->x * Area->y;
}

static void print_result(Parameters *Area)
{
	printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",
		Triangle(Area),
		Circle(Area),
		Trapezium(Area),
		Square(Area),
		Rect(Area));
}

int main ()
{
	Parameters *Area = malloc(sizeof(Parameters));
	
	scanf("%lf %lf %lf", &Area->x, &Area->y, &Area->z);
	print_result(Area);
	
	free(Area);

	return 0;
}
