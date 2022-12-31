#define n 3


int tran(int mat[n][n],int nr)
{
	int transpose[3][3];
    for (int i = 0; i < nr; i++)
        {
		for (int j = 0; j < nr; j++)
            transpose[i][j] = mat[j][i];
}
}
