#include<iostream>
using namespace std;
class set
{
	int a,b;
	public:
		void area(int);
		void area(float);
		void area(int,int);
};
void set:: area(int x)
{
	int c;
	c=(3.14)*(x*x);
	cout <<"area of circle is ="<<c<<endl;
	
}
void set::area(int x,int y)
{
	int c;
	c=x*y;
	cout<<"area of rectangle is="<<c<<endl;
	
}
void set::area(float r)
{
	int c;
c=r*r;
cout<<"area of square "<<c<<endl;	
}
int main()
{
	set b;
	b.area(4,5);
	b.area(4.5f);
	b.area(5);
	return 0;
	
	
}
