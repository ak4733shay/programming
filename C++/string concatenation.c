//string concatination performing in this program
#include<stdio.h>
#include<string.h>
int main()
{
	char a[20],b[20];
	char s;
	printf("enter 1st string\n");
	scanf("%s",&a);
		printf("enter 2nd string\n");
	scanf("%s",&b);	
	printf("%s%s\n",a,b);
strcat(&a,&b);
printf("concatenated string is %s",);
	return 0;
}
