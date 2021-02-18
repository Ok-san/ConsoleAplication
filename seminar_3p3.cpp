#include "libraries.h"

void displaySeminar_3p3(int* array, int size)
{
	system("cls");
	cout << "Original array:" << endl;
	displayData(array, size);
	if (size > 1)
	{
		int* arraySort = new int[size];
		arraySort = sort(array, size);
		cout << "\nSort array:" << endl;
		displayData(arraySort, size);
		delete[] arraySort;

	}
	else cout << "You can't sort an array from a single element!" << endl;
}