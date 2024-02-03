#include <iostream>
using namespace std;
int swapR(int&x, int &y)
{

int temp;
temp = x;
x = y;
y = temp;
}
int swapP(int*x,int*y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
int swapV(int x,int y)
{
	int temp;
	temp = x;
	x=y;
	y=temp;
}
	

int main()
{
	int a=45;
	int b=67;
	swapR (a,b);
	cout << "After swapping by call by reference is A is" <<a <<endl;
	cout << "After swapping by call by reference B is"<< b <<endl;
	
	a=78;
	 b=90;
	swapP (&a,&b);
	cout << "After swapping by call by pointer is A is " <<a <<endl;
	cout << "After swapping by call by pointer B is "<< b <<endl;
	
	a=56;
	b=78;
	swapV(a,b);
		cout << "After swapping by call by value is A is " <<a <<endl;
	cout << "After swapping by call by value B is "<< b <<endl;
	
	return  0;
	}

