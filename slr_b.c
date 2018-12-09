#include <stdio.h>
#define MAX_LENGHT 20

typedef struct job_d {
	char person[MAX_LENGHT];
	double s_sal, v_sold;
}data;

static void scan_data(double  *s_ptr, double *v_ptr)
{
	scanf("%lf %lf", s_ptr, v_ptr);
}

static double bonus(double *s_ptr, double *v_ptr)
{
	return *(s_ptr) + ((*(v_ptr)/100) * 15);
}

void print_data(double *s_ptr, double *v_ptr)
{
	printf("TOTAL = R$ %.2lf\n", bonus(s_ptr, v_ptr));
}

int main()
{
	data work;

	scanf("%s", work.person);
	scan_data(&work.s_sal, &work.v_sold);
	print_data(&work.s_sal, &work.v_sold);

	return 0;
}
