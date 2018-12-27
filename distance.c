#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
	double a, b;
}pt_1;

typedef struct {
	double x, y;
}pt_2;

static void scandata(pt_1 *param1, pt_2 *param2)
{
	scanf("%lf %lf %lf %lf", &param1->a, &param1->b, &param2->x, &param2->y);
}

static  double calc(pt_1 *param1, pt_2 *param2)
{
	double z = powl(param2->x - param1->a, 2);
	double f = powl(param2->y - param1->b, 2);
	
	return z + f;
}

int main()
{
	pt_1 *param1 = malloc(sizeof(pt_1));
	pt_2 *param2 = malloc(sizeof(pt_2));
	scandata(param1, param2);
	printf("%.4Lf\n", sqrtl(calc(param1, param2)));
	free(param1);
	free(param2);	

	return 0;
}
