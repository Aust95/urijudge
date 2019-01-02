#include <stdio.h>

#define DYEAR 365
#define DMONTH 30

static void scandata(int *ptrx)
{
	scanf("%d", ptrx);
}

static void printdata(int *ptrx)
{
	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", *ptrx/DYEAR, (*ptrx%DYEAR)/DMONTH, (*ptrx%DYEAR)%DMONTH);
}

int main()
{
	int x;
	scandata(&x);
	printdata(&x);

	return 0;
}
