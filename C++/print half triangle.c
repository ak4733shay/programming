#include <stdio.h>
int main()
{
	int i,j;
	int rows=5;
	printf("print the star pattern in c Right half triangle\n");
	//for print the rows
	for( i=0;i<rows;i++)
	{
		for( j=0;j<=i;j++)
		{
			printf("*");//printf("%d",j+1);
		}                   //printf("%c",'a'+j);
		printf("\n");
	}
	return 0;
}
