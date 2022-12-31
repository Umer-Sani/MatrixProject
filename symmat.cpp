#define n 3




bool symmat(float mat[][n], int nr)
{
	float transpose[nr][nr];
	for (int i=0; i<nr; i++)
	{
	float transpose[3][3];
    	for (int i = 0; i < nr; i++)
        {
		for (int j = 0; j < nr; j++)
            transpose[i][j] = mat[j][i];}
            
		for (int j=0; i<nr; i++)
		{
		if (mat[i][j]== transpose[j][i])
		for (int j = 0; j < nr; j++)
			if (mat[i][j] != transpose[i][j])
				return false;
	return true;}	
		}
	}


