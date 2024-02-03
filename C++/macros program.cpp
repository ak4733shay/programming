#include <stdio.h>
#define A(p)({\
printf("%d",p*p);\})
int main()
{
printf("%d",A(4));
	
	return 0;
}
