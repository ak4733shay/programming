#include <iostream>
using namespace std;
int main()
{
int n;
int i;
int j;

cout<<"hello world";
cout<<"Enter the value of n";
cin >>n;
for (i=0; i<n; i++)
{
for (j=1;j<i; j++)
{

cout << "*";
}

cout << "\n";
}
return 0;
}
