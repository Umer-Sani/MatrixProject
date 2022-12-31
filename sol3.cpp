#include <iostream>
#include "det2.h"
#include "displayf.h"
#include "det2.h"
using namespace std;
float sol3(float mat[][3], int nr)
{
float k1, k2, k3, temp[3][3], temp2[3][3], deter, d1, d2,d3, x, y, z;
deter = det(mat, nr);
cout<<"Please enter constants   \n";
cin>>k1>>k2>>k3;


   	for (int i = 0; i < nr; i++)
       {
	for (int j = 0; j < nr; j++)
            temp[i][j] = mat[i][j];}

   	for (int i = 0; i < nr; i++)
       {
	for (int j = 0; j < nr; j++)
            temp2[i][j] = mat[i][j];}
    

temp[0][0] = k1;
temp[1][0] = k2;
temp[2][0] = k3;

temp2[0][1] = k1;
temp2[1][1] = k2;
temp2[2][1] = k3;

mat[0][2] = k1;
mat[1][2] = k2;
mat[2][2] = k3;



d1 = det(temp, nr);
d2 = det(temp2, nr);	
d3 = det(mat, nr);

z = d1/deter;
y = d2/deter;
x = d3/deter;
cout<<"The Solution of Entered matrix is :  x = "<<x<<" , y = "<<y<<" ,"<<"and z = "<<z<<"\n \n ";
}

    



