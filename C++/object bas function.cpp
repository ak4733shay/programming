#include <iostream>
using namespace std;
class times;
{

	int hours;
	int minutes;
	public:
		
		void get_time(int h,int m)
		{
			hours=h;
			minutes=m;
		}
		
		void put_time()
		{
			cout<<hours<<"hours"<<endl;
			cout<<minutes<<"minutes"<<endl;
			
		}
		
		void sum(time,time)
};

void time::(time t1,time t2)
{
	minutes=t1.minutes+t2.minutes;
	hours=minutes/60;
	minutes=minutes%60;
	hours= t1.hours+t2.hours;
}
int main()
{
	time t1,t2,t3;
	t1.get_time(2,45);
	t1.get_time(3,45);
	t3.sum(t1.t2);
	t1.put_time();
	t2.Put_time();
	t3.put_time();
	return 0;
	
}
