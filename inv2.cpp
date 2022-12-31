#include <iostream>
#include "det2.h"
#include "displayf.h"
using namespace std;
float inv2(float mat[][3], int nr)
{
float temp[0][0]; float deter;
deter = det(mat, nr);



temp[0][0] = mat[1][1];
mat[1][1] = mat[0][0];
mat[0][0] = temp[0][0];

mat[1][0] *= -1;
mat[0][1] *= -1;

   	for (int i = 0; i < nr; i++)
        {
		for (int j = 0; j < nr; j++)
            mat[i][j] /= deter;}
            
         cout<<"The inverse of the entered matrix is:  "<<endl;
		 dispmat(mat, nr);
}
