#include<stdio.h>
int main()
{
	int a=0,b=1,n,c,i=3;
	printf ("enter the value of n");
	scanf("%d",&n);
	printf("%d\t%d\t",a,b);
	c=a+b;
	while(i<=n)
	{
		printf("%d\t",c);
		a=b;
		b=c;
		c=a+b;
		i++;
		
	}
	return 0;
}

