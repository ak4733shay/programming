

/* progrm to calculate simple interest */
#include <iostream>
using namespace std;
int  ROI( int p,int r,int t)
{
	return (p*r*t/100);
}
int main()
{
	int p,r,t;
	cout <<"Enter the salary" <<p << endl;
	cin >> p;
	cout << " Enter the rate of interest for calculation"<< r << endl;
	cin >> r;
	cout << " Enter the time duration for interest calculation"<< t << endl;
	cin >> t;
	cout << "intrest is " << ROI(p,r,t) << endl;
	return 0;
}
