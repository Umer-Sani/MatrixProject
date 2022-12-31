#include <iostream>
#include <iomanip>
#define n 3
using namespace std;

void dispmat(float mat[][n], int nr)
{
	{
	for (int i=0; i<nr; i++)
	{
		for (int j=0; j<nr; j++)
		{
			cout<<setw(4)<<" "<<mat[i][j];}
	cout<<"\n";
	}
}
}
