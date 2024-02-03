#include<iostream>
using namespace std;
class items
{
	int code;
	float price;
	public:
		void get_data();
		void put_data();
	
};
void items::get_data(int a,float b)
{
	code = a=5;
	price = b=17.6;
//	cin>>a;
//	cin>>b;
}
void items::put_data()
{
	cout<<"print the values\n";
	cout<<"code:"<<code<<endl;
	cout<<"price"<<price<<endl;
}
int main()
{
	int i ;
	items *p=new items[2];
	 items *d=p;
	 cout<<"enter the values corresponding to the requirement\n";
	 for(int i=0;i<2;i++)
	 {
	 	p->get_data();
	 	p++;
	 }
	 	cout<<"print the values\n";
	 	for(int i=0;i<2;i++)
	 	{
	 		d->put_data();
	 		d++;
		 }
	 return 0;
}
