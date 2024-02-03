#include <stdio.h>
#include <stdlib.h>
 

struct box 
{
	int roll;
	char name[10];
	struct box*link;
	
} *start,*s ,ch;
void main()
{
	
	  int ch;
 start='\0';
   int i=1;

do{


s = (struct box*) malloc (sizeof(struct box));
	if(i==1)
	{
	s->link=start;

	i++;
}
else
s->link=start;
	start=s;



	scanf("%d",&start->roll);
	scanf("%c" , &start->name);
	printf("%d\n",start->roll);
	printf("%d",s);
	
	printf(" For insert new nade press 1 otherwise press another key\n");

scanf("%d",&ch);

}
while(ch==1);
}

	


