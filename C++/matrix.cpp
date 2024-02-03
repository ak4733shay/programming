#include <iostream>
using namespace std;
class matrix
{
	int a;
	public:
		void get_data();
		void put_data();
};
void get_data()
{
	int c,r,i,j;
int	mat[10][10],transpose;
	cout<<"enter the number of ros and columns of matrix"<<endl;
	cin>>c>>r;
	cout <<"enter the elements in matrix"<<endl;
	for(i=0;i<c;i++)


	for(i=0;i<r;i++)
	cin>>mat[i][j];
{

	transpose [j][i]=[i][j];
}
};
void put_data()
{
	int i,j;
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			cout<<transpose[i][j];
		}
		
	}
	
}
int main()
{

matrix p;
p.get_data();
p.putdata()
return 0;
}
