#include<iostream>
using namespace std;
class matrix
{
	int m[10][10];
	public:
		void read()
		{
			int r,c,j,i,m;
			cout<<"enter the value of rows and columns"<<endl;
			cout<<"enter the number of columns\n";
			
			for (int i=0; i<r;i++)
			for (j=0;j<c;j++)
			
			cin>>m[i][j];
			
		}

void display()
{
	int r,c,i,j,m;
	cout<<" matrix is"<<endl;
	for(int i=0;i<r;i++)
	for(int j=0;j<c;j++)
	cout<<"matrix"<<endl;
	cout<<m[i][j];
	
	friend  matrix trans(matrix);
};
	matrix trans (matrix m)
	{
		matrix m2;
		for (int i=0;i<r;i++)
		for(int j=0;j<c;j++)
		m2.m[j][i]=m1.m[i][j];
		return m2;
	};

int main()
{
	matrix mat1,mat2;
	mat1.read();
	mat2.display();
	mat2=trans(mat 1);
	cout<<"transpose matrix"<<endl;
	mat2.display();
	getch();
	return 0;
}
