#include <stdio.h>
#define PI 3.14159

int main()
{
	double r, a;
	scanf("%lf", &r);
	a = PI * r * r;
	printf("A=.4%lf\n", a);
	return 0;
	}
