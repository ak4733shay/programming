#include <iostream>
//#include<conio.h>
using namespace std;
class account
{
	static int count;
	public:
		static void display()
		{
			count++;
			cout<<"The value of count is="<<count<<endl;
		}
	};
int account::count=50;
int main()
{
	account c1 , c2,c3,c4;
//	clrscr();
	account::display();
	account::display();
	account::display();
	account::display();
	return 0;
}
