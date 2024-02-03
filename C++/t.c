#include <stdio.h>
int main()
{
	int r,c,i,j,matrix[20][20],transpose[20][20];
	printf("Enter the number of rows\n");
	scanf("%d",&r);
	printf("enter the number of columns\n");
	scanf("%d",&c);
	for(i=0;i<r;i++)
	{
	
	for(j=0;j<c;j++)
	
	
	scanf("%d",&matrix[i][j]);
    }
   
   // transpose[i][j]=[j][i];

matrix[i][j]=transpose[j][i]; 
printf("print the final matrix\n");
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
		printf("%d",transpose[i][j]);
	}
	printf("\n");
}
	return 0;
}
