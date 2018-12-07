#include <stdio.h>
#define GRADE_A_WEIGHT (2.0)
#define GRADE_B_WEIGHT (3.0)
#define GRADE_C_WEIGHT (5.0)

struct grades {
	double a, b, c;
};

double grades_weight(const struct grades *g)
{
    return (((g->a * GRADE_A_WEIGHT) + (g->b * GRADE_B_WEIGHT) + (g->c * GRADE_C_WEIGHT)))  /  (GRADE_A_WEIGHT + GRADE_B_WEIGHT + GRADE_C_WEIGHT);
}

void grades_fill(struct grades *g)
{
    scanf("%lf %lf %lf", &g->a, &g->b, &g->c);
}

int main()
{
	struct grades g;
    grades_fill(&g);
    printf("MEDIA = %.1lf\n", grades_weight(&g));

	return 0;
}
