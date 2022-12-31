#include <iostream>
#include "det3.h"
#include "displayf.h"
#include "math.h"

using namespace std;
float inv3(float mat[][3], int nr)
{float inverse; float deter;
deter = det3(mat, nr);
if (deter == 0)
{cout<<"The matrix has no inverse, ";
return 0;}
float a[3][3] ;


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
     
    	for (int i = 0; i < nr; i++)
        {
		for (int j = 0; j < nr; j++)
            transpose[i][j] /= deter;}	
cout<<"The inverse of the entered matrix is:  "<<endl;
dispmat(transpose, nr);
}
