//c program to print left half triangle
//pyramid of star
#include<stdio.h>
int main()
{
	int n,i,j,k;
	printf ("enter the value of n\n");
	scanf("%d",&n);
	for(i=0;i<=n;i++)//for print rows
	{
	for(j=0;j<2*(n-i)-1;j++)
	{
		printf(" ");
		
	
		}
		//lopp for print* character
		for(k=0;k<=i;k++)
		{
			printf("*");// printf("%d",k+1; printf("%c",'A'+k; 'a'
			}
			printf("\n");	
	}
	return 0;
}
