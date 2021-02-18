double sumElements(double** matrix, int i, int column)
{
	double sum = 0;
	for (int k = 0; k < column; k++)
		sum += matrix[i][k];
	
	return sum;
}