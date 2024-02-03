#include <stdio.h>
#include <conio.h>
#include "akshay.h"
int main()
{
	int a,b;
	printf (" Enter the value of a and b\n");
	scanf ("%d%d",&a,&b);
	printf("sum= %d\n", sum ( a,b));
	printf(" mul.%d\n", mul(a,b));
	printf(" sub.%d\n", sub(a,b));
	return 0;
}
