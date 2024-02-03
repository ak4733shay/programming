#include <iostream>
using namespace std;
class greater
{
	int a;
	int b;
	public:
	void get_data();
	void display_data();
	private:
		int larg();
			
};
void greater::get_data()
{
	cout<< "enter the 1st number"<<endl;
	cin>> a;
	cout << "enter the 2nd number"<<endl;
	cin>>b;
	
	}
	void greater::display_data();
	{
		int l;
		l=larg();
		cout << "larger is "<<l<<endl;		
	}
	int greater::larg()
	{
		int l;
		if (a>b)
		l=a;
		else
		l=b;
		return l;
	}
		
		
	
	int main()
	{
		greater s1;
		
		s1.get_data();
		s1.display_data();
		return 0;
	}

