#include<stdio.h>
#include<conio.h>
int main()
{


int i ,j,n;
printf("Enter the value of n");
scanf ("%d",&n);
printf(" Program for printing the star pattern\n");

for(i=5;i<=n;i++)
{
	for(j=1;j<=i;j--)

{

printf(" * ");
}
printf("\n");
}
 return 0;
}
