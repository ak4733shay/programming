#include<iostream>
using namespace std;
class swap_2;
class swap;
class swap{
    public:
	int b=6;
	friend void swap1(swap_2,swap);
};
class swap_2
{
		
     	int a=2;
     	public:
        friend void swap1(swap_2 a1,swap a2);
};

 int swap1(swap_2 a1,swap a2)
{
	int temp;
	temp=a1.b;
	a1.b=a2.a;
	a2.a=temp;
	cout<<"swapped value a"<<a1.a <<"b"<<a2.b;
}
int main()
{
	swap a1;
	swap_2 a2;
	swap1(a1,a2);
	return 0;
}
