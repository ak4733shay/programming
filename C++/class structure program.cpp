#include <iostream>
using namespace std;
class person   // creation of a class
{
	char name [50];    
	int age;
	int roll;
	public:
		void get_data ();
		void put_data ();
};
void person::get_data()
{
	cout <<"enter the name of a person"<<endl;
	cin>> name;
	cout <<"enter the age of a person"<<endl;
	cin >> age;
cout <<"enter the  roll no."<<endl;
cin >> roll;	
}
void person::put_data()  // return type clas name function name
{
	cout << name<<endl;
	cout << age<<endl;
	cout << roll<<endl;
}
int main()
{
	person p1;
	p1.get_data();
	p1.put_data();// function calling
	return 0;
}

/*int sum(int x,int y,int z,int w=0)
{
	return (x+y+z+w=0);
}
int main()
{
	cout <<"sum is (10,5,5)"<< sum(x+y+z+w)endl;
	
	cout <<"sum is (10,5,6)"<<endl;
	cout <<"sum is (10,5,5,5)"<<endl;
	return 0;
}*/
