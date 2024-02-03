#include <stdio.h>
int main()
{
	int a[2][2],b[2][2],c[2][2];
	int i,j;
	printf("enter the elements in first mtrix\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		scanf("%d",&a[i][j]);
	}
printf("enter the elements in second mtrix\n");	
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	scanf("%d",&b[2][2]);
}
printf("addition formula\n");
c[i][j]=a[i][j]+b[i][j];
//resulted matrix
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
		printf("%d\t",c[i][j]);
	}
	printf("\n");
}
return 0;
}
