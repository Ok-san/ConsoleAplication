void deleteData(int* array)
{
	delete[] array;
}

void deleteData(double** matrix, int row)
{
	for (int i = 0; i < row; i++)
		delete matrix[i];

	delete[] matrix;
}