#include <stdio.h>

#define PI 3.14159

static double sphere ()
{
	double r;

	scanf("%lf", &r);

	return (4.0/3) * PI * (r * r * r);
}

int main ()
{
	printf("VOLUME = %.3lf\n", sphere());

	return 0;
}
