#include <stdio.h>
#include<errno.h>
#include<string.h>
int main()
{
FILE *fp;
fp=fopen("aks.txt","w");
if(ferror)
{
	printf("%d",errno);
	printf("%s",strerror(errno));
}
return 0;
}
