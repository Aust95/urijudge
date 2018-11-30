#include <stdio.h>

int main()
{
	struct vec2i {
		int x, y;
	};

	struct vec2i sum;

	scanf("%d %d", &sum.x, &sum.y);
	printf("SOMA = %d\n", sum.x  + sum.y);

	return 0;
}
