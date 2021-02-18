#include"libraries.h"

void displayData(int* array, int size)
{
	for (int i = 0; i < size; i++)
		cout << *(array + i) << " ";
	cout << endl;
}

void displayData(double** matrix, int row, int column)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
			cout << *(*(matrix + i) + j) << " ";
		cout << "\n";
	}
}

void displayData(char* buffer, int size)
{
	for (int i = 0; buffer[i] != '\0'; i++)
		cout << *(buffer + i);
	cout << endl;
}