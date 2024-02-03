#include<iostream>
#include<string>
using namespace std;
class media
{
protected: char title[10];
           float price;
		   public:
		   media(char*s,float p)
		   {
		   	strcpy (title,s);
		   	price = p;
		   	
			   }
			   virtual void display()
			   {
				   }	
};
class book:public media
{
	int pages;
	public:
		book(char*s,float p,int p1):media(s,p)
		{
			int pages;
			pages=p1;
		}
		void display()
		{
			cout<<"Book title is\n"<<title;
			cout<<"Book page numbr is\n"<<pages;
			cout<<"Book price is\n"<<price;
		}
};
class tape:public media
{
	int time;
	public:
		tape(char*s,float p,int t1):media(s,p)
		{
			time t1;
		}
		void display()
		{
	     	cout<<"Book title is\n"<<title;
			cout<<"Book page numbr is\n"<<pages;
			cout<<"Book price is\n"<<price;	
			cout<<"Book timing is\n"<<time;
		}
};
int main
{
	media *mptr;
	
	book b1("c++",250,498);
		tape t1("course c++",100,2);
		mptr=&b1;
	mptr->display();
	mptr=&t1;
	mptr->display();
	return 0;
}


