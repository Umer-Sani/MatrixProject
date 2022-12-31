#include <iostream>
#include <iomanip>
using namespace std;


float temp[2][2];

float adj2(float mat[][3], int nr)
{
temp[0][0] = mat[1][1];
mat[1][1] = mat[0][0];
mat[0][0] = temp[0][0];

mat[1][0] *= -1;
mat[0][1] *= -1;

cout<<"The adjoint is: "<<endl;
	
	for (int i=0; i<nr; i++)
	{
		for (int j=0; j<nr; j++)
		{
			cout<<setw(4)<<" "<<mat[i][j];}
	cout<<"\n";
}

}
