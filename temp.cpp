#include <iostream>
#include "det2.h"
#include "displayf.h"

using namespace std;
int main()
{int nr = 2;
float mat[][3] = {{12,3},{2,-3}};
float k1, k2, temp[3][3], temp2[3][3], deter, d1, d2, x, y;
deter = det(mat, nr);
cout<<"Please enter constants   \n";
cin>>k1>>k2;


   	for (int i = 0; i < nr; i++)
       {
	for (int j = 0; j < nr; j++)
            temp[i][j] = mat[i][j];}

   	for (int i = 0; i < nr; i++)
       {
	for (int j = 0; j < nr; j++)
            temp2[i][j] = mat[i][j];}
    
    
temp[0][0] = k1;
temp[0][1] = k2;

temp2[1][0] = k1;
temp2[1][1] = k2;

d1 = det(temp, nr);
d2 = det(temp2, nr);	

x = d1/deter;
y = d2/deter;

cout<<"The Solution of Entered matrix is :  x = "<<x<<" . And y = "<<y<<" ."<<"\n \n ";
}

    



