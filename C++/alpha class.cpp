#include<iostream>
using namespace std;
class alpha
{
	int x;
	public:
		alpha(int x1)
		{
			x=x1;
		}
		void show_x()
		{
			cout<<"the value of x is "<<x<<endl;
		}
};
class beta
{
	int y;
	public:
		beta(int y1)
		{
			y=y1;
		}
		void show_y()
		{
			cout<<"the value of y is  "<<y<<endl;
		}
};
class gama:public alpha,public beta
{
	int m,n;
	public:
		gama(int x1,int y1,int m1,int n1):alpha(x1),beta(y1)
		{
			m=m1;
			n=n1;
		}
		void show()
		{
			cout<<" the value of m is "<<m<<endl; 
				cout<<"the value of n is "<<n<<endl;
					
		}
};
int main()
{
	
	gama g1 (2,3,8,10);
	g1.show();
	g1.show_x();
	g1.show_y();
return 0;	
}
