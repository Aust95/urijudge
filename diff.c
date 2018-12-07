#include <stdio.h>

struct diff {
	int a, b, x, y;
};

int equation (struct diff *e_ptr)
{
	return (e_ptr->a * e_ptr->b) - (e_ptr->x * e_ptr->y);
}
int main()
{
	struct diff eqt;

	scanf("%d %d %d %d", &eqt.a, &eqt.b, &eqt.x, &eqt.y);

	printf("DIFERENCA = %d\n", equation(&eqt));

	return 0;
}
