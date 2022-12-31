#include <iostream>
using namespace std;
#include <iomanip>
#include <math.h>
#include "displayf.h"
#define n 2

float adj3 (float mat[][3],int  nr)
{float a[3][3] ;


a[0][0] = pow(-1,1+1)*((mat[1][1]*mat[2][2])-(mat[1][2]*mat[2][1]));
a[0][1] = pow(-1, 1+2)*((mat[1][0]*mat[2][2])-(mat[1][2]*mat[2][0]));
a[0][2] = pow(-1, 1+3)*((mat[1][0]*mat[2][1])-(mat[1][1]*mat[2][0]));
a[1][0] = pow(-1, 2+1)*((mat[0][1]*mat[2][2])-(mat[0][2]*mat[2][1]));
a[1][1] = pow(-1, 2+2)*((mat[0][0]*mat[2][2])-(mat[0][2]*mat[2][0]));
a[1][2] = pow(-1, 2+3)*((mat[0][0]*mat[2][1])-(mat[0][1]*mat[2][0]));
a[2][0] = pow(-1, 3+1)*((mat[0][1]*mat[1][2])-(mat[0][2]*mat[1][1]));
a[2][1] = pow(-1, 3+2)*((mat[0][0]*mat[1][2])-(mat[0][2]*mat[1][0]));
a[2][2] = pow(-1, 3+3)*((mat[0][0]*mat[1][1])-(mat[0][1]*mat[1][0]));


float transpose[3][3];
    	for (int i = 0; i < nr; i++)
        {
		for (int j = 0; j < nr; j++)
            transpose[i][j] = a[j][i];}
cout<<"The adjoint is: "<<endl;     
dispmat(transpose, nr);     
}

        


