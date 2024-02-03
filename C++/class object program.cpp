#include <iostream>
using namespace std;
class person
{
	char name[30];
	int age;
	int id;
	int salary;
	public:
	void get_data();
	void put_data();
		
};
void person::getdata();
{

	cout << "enter name" <<endl;
	cin >> name;
	cout <<"enter age" << endl;
	cin >> age;
}

int main()
{
	person p1;
	p1.get_data();
	return 0;
}
