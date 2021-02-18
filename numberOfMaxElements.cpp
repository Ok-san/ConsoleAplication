int numberOfMaxElements(int* array, int size, int max)
{
	int quantity = 0;
	for (int i = 0; i < size; i++)
	{
		if (array[i] == max)
			quantity++;
	}
	return quantity;
}