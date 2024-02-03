#include <iostream>
using namespace std;
class empolee
{
	char name[20];
	int id;
	char depname;
	int age;
public:	void get_data()
	{
		cout<<"Enter the name of emp"<<endl;
		cin >>name;
		cout << "Enter the age of employee"<<endl;
		cin>>age;
		cout<<"Enter the empolyee id"<<endl;
		cin>> id;
		cout<<"Enter the department name"<<endl;
		cin>>depname;
	}
	public: void put_data()
	{
		cout<< "Name of empolee "<<name<<endl;
		cout<<"Age of empolee "<<age<<endl;
	}
};
int main()
{
	int num;
	empolee e1[50];
	cout <<"enter the number of empolee"<<endl;
	cin>>num;
	for (int i=0; i<num;i++)
	
	e1[i].get_data();
	for(int i=0; i<num;i++)
	e1[i].put_data();
	return 0;
	
}
