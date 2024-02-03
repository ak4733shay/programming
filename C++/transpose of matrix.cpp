#include <stdio.h>
#include <stdlib.h>
int main()
{
	int r,c,i,j,matrix[5][5],transpose[5][5];
	printf("Enter the number of rows\n");
	scanf("%d",&r);
	printf("enter the number of columns\n");
	scanf("%d",&c);
	
	printf("enter the elements of in matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
				scanf("%d",&matrix[i][j]);
    }
   
 for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
	transpose[i][j]=matrix[j][i];
	}

}

 

//matrix[i][j]=transpose[j][i]; 
printf("print the final matrix\n");
for(i=0;i<c;i++)
{
	for(j=0;j<r;j++)
	{
		printf("%d",transpose[i][j]);
	}
	printf("\n");
}
	return 0;
}
