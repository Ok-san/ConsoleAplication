int* sort(int* array, int size) 
{
	int* arraySort = new int[size];
	int j = size / 2, k = 0;

	for (int i = 0; i < size; i++)
	{
		if (i % 2 == 0)
		{
			arraySort[j] = array[i];
			j++;
		}
		else
		{
			arraySort[k] = array[i];
			k++;
		}
	}
	return arraySort;
}