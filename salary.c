#include <stdio.h>

typedef struct info {
	int  h;
	float rph;
}data;

float salary (struct info *info_p)
{
	return info_p->h * info_p->rph; 
}

int main()
{	
	data worker;
	int id;

	scanf("%d %d %f", &id, &worker.h, &worker.rph);

	printf("NUMBER = %d\nSALARY = U$ %.2f\n", id, salary(&worker));

	return 0;
}
