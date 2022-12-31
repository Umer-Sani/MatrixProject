#include <iostream>
#include <math.h>

using namespace std;

int input, nr, nc;
const int n = 3;
int transpose[n][n];

void dispmat(int mat[][n])
{
	{
	for (int i=0; i<nr; i++)
	{
		for (int j=0; j<nr; j++)
		{
			cout<<" "<<mat[i][j];}
	cout<<"\n";
	}
}
}

int tran(int mat[][3], int transpose[][3], int nr)
{
    for (int i = 0; i < nr; i++)
        {
		for (int j = 0; j < nr; j++)
            transpose[i][j] = mat[j][i];
		}
}

bool symmat(int mat[][n], int nr)
{
	int tr[nr][3];
	tran(mat, tr, n);
	for (int i = 0; i < nr; i++)
		for (int j = 0; j < nr; j++)
			if (mat[i][j] != tr[i][j])
				return false;
	return true;}


int main()
{
	
	cout<<"Please enter the Number of rows of the matrix \n";
	cin>>nr;
	cout<<"Please enter the Number of Columns rows of the matrix \n";
	cin>>nc;
	
	int mat[n][n];
	
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
				dispmat(mat);
				break;
			}
			case 2:
			{
				if (symmat(mat, nr) == 1)
				{cout<<"The Matrix \n";
				dispmat(mat);
				cout<<"\n is Symmetric. \n";}
				else
				{cout<<"The Matrix \n";
				dispmat(mat);
				cout<<"\n is Unsymmetric. \n";}
				break;
			}
			
				
		}
			
		
	
		}
}





