#include<iostream>
using namespace std;
struct student
{
	char name[50];
	int age;
	int phy,hindi,eng,math;
	int total;
} s1;
int main()
{
//	cout<<"Enter the marks of a student\n";
	cout<<"enter name of a student\n";
	cin>>s1.name;
	cout<<"enter age of student\n";
	cin>>s1.age;
	cout<<"Enter the marks of a student\n";
	cin>>s1.phy>>s1.eng>>s1.hindi>>s1.math;
	s1.total=s1.phy+s1.eng+s1.hindi+s1.math;
	cout<<"result is= "<<s1.total;
	return 0;
}
