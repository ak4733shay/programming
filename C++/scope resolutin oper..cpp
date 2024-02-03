#include <iostream>
using namespace std;
int m=50;
int main()
{
	int m=40;
	cout<<"the vale of local variable\n"<<m;
	cout<<"the vale of global variable\n"<<::m;
	return 0;
}
