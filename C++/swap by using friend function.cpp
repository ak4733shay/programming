#include<iostream>
using namespace std;
class class_2;
class  class_1
{
	int value1;
	public:
		void get_data(int a){value1=a;}
		void put_data(void){cout<<value1;}
		friend void exchange (class_1&,class_2&);
	
};
class class_2
{
	int value2;
	public:
		void get_data(int b){value2=b;}
		void put_data(void){cout<<value2;
		}
		friend void exchange (class_1&,class_2&);
		
};
void exchange (class_1&x,class_2&y)
{
	int temp;
	temp=x.value1;
	x.value1=y.value2;
	y.value2=temp;
};
int main()
{
	class_1 c1;
	class_2 c2;
	c1.get_data(100);
	c2.get_data(200);
	cout <<"before exchange " <<endl;
	c1.put_data();
	c2.put_data();
	exchange (c1,c2);
	cout <<"after  exchange " <<endl;
	c1.put_data();
	c2.put_data();
return 0;	
	
}
