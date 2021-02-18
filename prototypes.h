#pragma once
void menu();
//int confirmation();

// activities for seminar 3

int enterSize(const int maxSize); //���� ������� �������
void enterData(int* array, int size); //���� �������
void displayData(int* array, int size); //����� ��������� �������
void deleteData(int* array); //�������� �������

void seminar_3();
void displaySeminar_3p1(int* array, int size); // ����� �������� 3 ������ 1
int serchMax(int* array, int size); //������ ������ �� ����������
int numberOfMaxElements(int* array, int size, int max); //���������� ����������
int* positionOfMaxElements(int* array, int size, int max, int quantity);// ������� ����������

void displaySeminar_3p2(int* array, int size); //����� �������� 3 ������ 2
int positionNull(int* array, int size); // ����� ������� ��������������� ��������
int positionNull(int* array, int size, int first); // ����� ������� ������� �������� ��������
int productElements(int* array, int first, int second); //���������� ������������

void displaySeminar_3p3(int* array, int size); // ����� �������� 3 ������ 3
int* sort(int* array, int size); //����������

// activities for seminar 4
int enterRow(const int rowMax); // ���� ���������� �����
int enterColumn(const int columnMax); // ���� ���������� ��������
void enterData(double** matrix, int row, int column);  // ���� �������� � �������
void displayData(double** matrix, int row, int column); //������ �������� �������
void deleteData(double** matrix, int row); // �������� �������

void seminar_4(); // ���� �������� 4
void displaySeminar_4p1(double** matrix, int row, int column); // ����� �������� 4 ������ 1
bool searchMatches(double** matrix, int i, int column);// ����� ����������� ����� �� ���������

void displaySeminar_4p2(double** matrix, int row, int column);// ����� �������� 4 ������ 2
bool searchNegativeElement(double** matrix, int i, int column);// ����� �������������� ��������
double sumElements(double** matrix, int i, int column);// ����� ��������� � ������� � ������������� ���������

//activities for seminar 5
void displayData(char* buffer, int size);//����� ��������� ������

void seminar_5();// ���� �������� 5
void displaySeminar_5(); // ����� ������ ������ �������� 5
char* fileOpenCheck(int size); // �������� �������� �����
int numberWord(char* buffer, int size); // ����� ���������� ����
void displayWord(char* buffer, int size); // ����� ���� �� �����