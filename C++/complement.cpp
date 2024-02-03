#include <iostream>
using namespace std;
class binary
{
	string s;
	public:
		void input();
	
	void chek_bin();
	
		void ones_comp();
	public:
		void display();
};
void binary::input()
{
	cout <<"Enter the string"<<endl;
	cin>> s;
}
void binary:: chek_bin()
{
	for (int i=0;i<=s.length();i++)
	{
	
	if(s.at(i)!='0'&&s.at(i)!='1')
	{
		cout<< "invalid string"<<endl;
		exit(0);
	}
	
}
}
void binary::ones_comp()
{
	int i;
	chek_bin();
	for(i=0; i<=s.length();i++)
	{
		if(s.at(i)=='0')
		s.at(i)='1';
		else
		s.at(i)='0';
	}
}
void binary::display()
{
	
	cout <<"result is"<<s;
	
}
int main()
{
	binary b1;
	b1.input();
	b1.display();
	b1.chek_bin();
	b1.ones_comp();
	return 0;
}
