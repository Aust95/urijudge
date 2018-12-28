#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int n, arr[7], arr2[7];
}money;

static void scandata(money *type)
{
	scanf("%d", &type->n);
}

static void calc(money *type)
{
	for (int i = 0; i < 7; i++){
		type->arr2[i] = type->n/type->arr[i];
		type->n = type->n % type->arr[i];
	}
}

static void printvalues(money *type)
{
	printf("%d\n", type->n);

	for (int i = 0; i < 7; i++){
		printf("%d nota(s) de R$ %d,00\n", type->arr2[i], type->arr[i]);
	}
}

int main()
{
	money *type = malloc(sizeof(money));	

	type->arr[0] = 100;
	type->arr[1] = 50;
	type->arr[2] = 20;
	type->arr[3] = 10;
	type->arr[4] = 5;
	type->arr[5] = 2;
	type->arr[6] = 1;
	scandata(type);
	calc(type);
	printvalues(type);
	free(type);

	return 0;
}
