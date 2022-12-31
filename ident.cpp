
#define n 3




bool ident(float mat[][n], int nr)
{int identity[][n]={{1,0,0},{0,1,0},{0,0,1}};
for (int i=0; i<nr;i++)
{




		for (int j = 0; j < nr; j++)
			{
			if (mat[i][j] != identity[i][j])
				return true;}
	return false;}
}


