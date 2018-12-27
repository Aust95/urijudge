#include <stdio.h>
#include <stdlib.h>

static void scandata(int *vecptr)
{
	scanf("%d %d %d", &vecptr[0], &vecptr[1], &vecptr[2]);
}

static void comp(int *vecptr)
{
	if (vecptr[0] > vecptr[1] && vecptr[0] > vecptr[2])
		printf("%d eh o maior\n", vecptr[0]);
	else if (vecptr[1] > vecptr[0] && vecptr[1] > vecptr[2])
		printf("%d eh o maior\n", vecptr[1]);
	else if (vecptr[2] > vecptr[1] && vecptr[2] > vecptr[0])
		printf("%d eh o maior\n", vecptr[2]);
}	

static void free_stuff(int *vecptr)
{
	if (vecptr != NULL)
		free(vecptr);
}

int main ()
{
	int *vecptr = malloc(sizeof(int) * 3);

	scandata(vecptr);
	comp(vecptr);
	free_stuff(vecptr);

	return 0;
}
