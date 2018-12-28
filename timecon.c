#include <stdio.h>
#include <stdlib.h>

#define SHOUR 3600

typedef struct{
	int x;
}data;

static void scandata(data *hour)
{
	scanf("%d", &hour->x);
}

static void printinfo(data *hour)
{
	printf("%d:%d:%d\n",
			hour->x/SHOUR,
			(hour->x%SHOUR)/60,
			(hour->x%SHOUR)%60);
}

int main()
{
	data *hour = malloc(sizeof(data));
	scandata(hour);
	printinfo(hour);
	free(hour);

	return 0;
}
