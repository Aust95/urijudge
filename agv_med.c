#include <stdio.h>

int main()
{
	struct vec2df {
		double x, y;
	};

	typedef struct vec2df st_grd;
	st_grd med;

	scanf("%lf %lf", &med.x, &med.y);
	printf("MEDIA = %.5lf\n",((med.x * 3.5) + (med.y * 7.5))/(3.5 + 7.5));

	return 0;
}
