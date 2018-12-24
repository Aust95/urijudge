#include <stdio.h>

#define SIZE 2

typedef struct {
	int id, un;
	float value;
}p_data;

static void data_read(p_data *product)
{
	for (int i = 0; i < 2; i++) {
		scanf("%d %d %f", &product[i].id, &product[i].un, &product[i].value);	
	}
}

static float prc_calc(p_data *product)
{
	float result[SIZE];

	for (int i = 0; i < SIZE; i++) {
		result[i] = product[i].un * product[i].value;		
	}

	return result[0] + result[1];
}

int main ()
{
	p_data product[SIZE];

	data_read(product);

	printf("VALOR A PAGAR: R$ %.2f\n", prc_calc(product));

	return 0;
}
