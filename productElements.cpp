int productElements(int* array, int first, int second)
{
	int prod = 1;
	for (int i = first + 1; i < second; i++)
		prod *= array[i];

	return prod;
}