#include<iostream>
using namespace std;

class class_1
{
	int a;
public:
	void get_data()
	{
		cout<<"enter the value of a";
		cin>>a;
	}
	void display()
	{
	
	cout<<"vale of a: is";
	cout<<a;
	
	}
	
};
class class_2
{
	int b;
	public:
		void get_data()
		{
			cout<<"enter the value of b"<<endl;
			cin>>b;
		}
		void display()
		{
			cout <<"value of b is:"<<endl;
			cout<<b;	
		}
	friend void add(class_1,class_2);
		
};
 void  add(class_1 x ,class_2 y)
{
	int c;
c=	x.a+y.b;
cout<<c;
}

int main()
{
 class_1 o1;
 class_2 o2;
 
 o1.get_data();
 o2.get_data();
 o1.display();
 o2.display();
 add(o1,o2);
 //o1.display();
 //o2.display();
 return 0;
   }
