#include <iostream>
using namespace std;
#define n 3




float det3(float mat[][n], int nr)
{float dete; float temp , temp1, a, b , c, ca1, ca2, cb1, cb2, cc1, cc2;


a =mat[0][0]; b = mat[0][1]; c = mat [0][2];
ca1 = mat[1][1]*mat[2][2]; ca2 = mat[2][1]*mat[1][2];
cb1 = mat[1][0]*mat[2][2]; cb2 = mat[2][0]*mat[1][2];
cc1 = mat[1][0]*mat[2][1]; cc2 = mat[2][0]*mat[1][1];
dete=  (a*(ca1-(ca2)))-(b*(cb1-(cb2)))+(c*(cc1-(cc2)));
return dete;
}

