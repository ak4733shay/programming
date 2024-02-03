#include <iostream>
using namespace std;
class b
{
	int a;
	public:
		int b;
		void set_ab();
		void get_a();
		void show_a();
};
class d:public b
{
	int c;
	public:
		void mul();
		void display();
};
void set_ab()
{ int a,b;
	a=3;
	b=4;
}
void b::show_a()
{
	int a;
	return a;
}
void show_a()
{
	cout<<"a="<<a<<"\n";
}
void d::mul()
{
	c=b*get_a()<<"\n";
}
void d::display()
{
	cout<<"a="<<get_a()<<"\n";
	cout<<"b="<<b<<"\n";
	cout<<"c="<<c<<"\n";
}
int main()
{
	d p;
	p.set_ab();
	p.mul();
	p.show_a();
	p.display();
	d.b=12;
	d.mul();
	d.display();
}
