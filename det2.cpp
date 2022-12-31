
#define n 3




float det(float mat[][n], int nr)
{float dete; float temp , temp1;


temp = (mat[0][0]*mat[1][1]);
temp1 = (mat[0][1]*mat[1][0]);
dete = temp - temp1;
return dete;
}

