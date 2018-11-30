#include <stdio.h>

int main()
{
	struct vec2i {
		int x, y;
	};

	struct vec2i prod;
	
	scanf("%d %d", &prod.x, &prod.y);

	printf("PROD = %d\n", prod.x * prod.y);

	return 0;
}
