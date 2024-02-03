#include <iostream>
using namespace std;


class items
{
	int itemcode[50];
	int itemprice[50];
	int count;
	public:
		void input_data();
		void cnt()  {count = 0;}
		void display_sum();
		void  remove();
		void display();
		
};



void items::input_data()
{
	cout<<"Enter the code of bottle"<<endl;
	cin>> itemcode[count];
	cout<<"Enter the price of items"<<endl;
	cin>> itemprice[count];
	count++;
}
void items::display_sum()
{
	int item;
	int sum=0;
	for( int i=0; i<count;i++)
	sum=sum+itemprice[i];
	cout<<"result is"<<sum<<endl;
}
	void items::remove()
	{
		int code;
		cout<<"Enter the code to be removed"<<endl;
		cin>>code;
		for(int i=0; i<count;i++)
		{
			if( code==itemcode[i])
			{
				itemprice[i]=0;
				break;
			}
		}
	}
	void items::display()
				{
					for( int i=0; i<count;i++)
					{
						cout <<"Item code is"<<itemcode[i]<<endl;
						cout <<"Item price is"<<itemprice[i]<<endl;
					}
				}
int main()
{

items b;
int ch;
b.cnt();
b.input_data();
b.display();
b.display_sum();
b.remove();

 
do{
cout<<"1.add item";	
cout<<"2.delete item";
cout<<"3.display total values of item";
cout<<"4.display all item";
cout<<"5.exit";
cout<< "enter your choice"<<endl;
cin>>ch;
switch(ch)
{
	case1:b.input_data();
	break;
	case2:b.remove();
	break;
	case3: b.display_sum();
	break;
	case4: b.display();
	break;
	case5: cout<<"invalid staement"<<endl;
}
}
while(1);

 return 0;
}			
		
	

