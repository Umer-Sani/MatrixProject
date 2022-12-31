#include <iostream>
#include "displayf.h"
#include "symmat.h"
#include "ident.h"
#include "tran.h"
#include "det2.h"
#include "det3.h"
#include "adj2.h"
#include "adj3.h"
#include "inv2.h"
#include "inv3.h"
#include "sol.h"
#include "sol3.h"

#define n  3
using namespace std;

int input, nr, nc;



int main()
{
	while (1)
	{
	
	cout<<"Please enter the Number of rows of the matrix \n";
	cin>>nr;
	cout<<"Please enter the Number of Columns rows of the matrix \n";
	cin>>nc; 
	if (nr > 0 && nr < 4 && nc > 0 && nc <4 )
	{
	float mat[n][n];
	
		if(nr!=nc)																//Checks the order of matrix
		{cout<<"Please enter the correct dimensions of a square matrix \n";}
		else
		{		
				for(int i=0; i<nr; i++)
					{for(int j = 0; j<nc; j++)
						{cout<<"Enter Matrix element: "<<i+1<<" "<<j+1<<"\t";
						cin>>mat[i][j];}
				}
			
			cout<<"\n Please chose: \n \n";
			cout<<"1. To display a matrix \n";
			cout<<"2. To check whether the entered matrix is symmetric matrix or not \n";
			cout<<"3. To check whether the entered matrix is identity matrix or not\n";
			cout<<"4. To determine the determinant of entered matrix\n";
			cout<<"5. To determine the adjoint of entered matrix\n";
			cout<<"6. To determine the inverse of entered matrix\n";
			cout<<"7. To determine the solution of entered matrix (i.e. solving multiple linear equations simultaneously)\n \n";
			cin>>input;
			
		switch(input)
		{
			case 1:
			{
				dispmat(mat, nr);
				break;
			}
			case 2:
			{
				if (symmat(mat, nr) == 1)
				{cout<<"The Matrix \n";
				dispmat(mat, nr);
				cout<<"\n is Symmetric. \n";}
				else
				{cout<<"The Matrix \n";
				dispmat(mat, nr);
				cout<<"\n is Unsymmetric. \n";}
				break;
			}
				case 3:
			{
				if (ident(mat, nr) == 1)
				{cout<<"The Matrix \n";
				dispmat(mat, nr);
				cout<<"\n is Identity Matrix. \n";}
				else
				{cout<<"The Matrix \n";
				dispmat(mat, nr);
				cout<<"\n is not Identity Matrix. \n";}
				break;
			}
				case 4:
			{		
				if (nr == 2)
				cout<<"The det is "<<det(mat, nr);
				else
				cout<<"The det is "<<det3(mat, nr);
				break;
			}
				case 5:
			{	if (nr == 2)
				adj2(mat, nr);
				else
				adj3(mat, nr);
				break;
			}
				case 6:
			{			
				if (nr == 2)
				inv2(mat, nr);
				else
				inv3(mat, nr);
				break;
			}
				case 7:
				if (nr == 2)
				sol(mat, nr);
				else
				sol3(mat, nr);
				break;
				default:
				{
					cout<<"Exiting :)";
					break;
				}
		}
			break;
		
	
		}
}
else
{cout<<"Please enter valid input from (1-3)";
continue;}
}
}
