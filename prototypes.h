#pragma once
void menu();
//int confirmation();

// activities for seminar 3

int enterSize(const int maxSize); //ввод размера массива
void enterData(int* array, int size); //ввод массива
void displayData(int* array, int size); //вывод исходного массива
void deleteData(int* array); //удаление массива

void seminar_3();
void displaySeminar_3p1(int* array, int size); // вывод семинара 3 задачи 1
int serchMax(int* array, int size); //поиска одного из максимумов
int numberOfMaxElements(int* array, int size, int max); //количество максимумов
int* positionOfMaxElements(int* array, int size, int max, int quantity);// позиции максимумов

void displaySeminar_3p2(int* array, int size); //вывод семинара 3 задачи 2
int positionNull(int* array, int size); // поиск позиции первогонулевого элемента
int positionNull(int* array, int size, int first); // поиск позиции второго нулевого элемента
int productElements(int* array, int first, int second); //вычисление произведения

void displaySeminar_3p3(int* array, int size); // вывод семинара 3 задачи 3
int* sort(int* array, int size); //сортировка

// activities for seminar 4
int enterRow(const int rowMax); // ввод количества строк
int enterColumn(const int columnMax); // ввод количества столбцов
void enterData(double** matrix, int row, int column);  // ввод значений в матрицу
void displayData(double** matrix, int row, int column); //вывыод исходной матрицы
void deleteData(double** matrix, int row); // удаление матрицы

void seminar_4(); // меню семинара 4
void displaySeminar_4p1(double** matrix, int row, int column); // вывод семинара 4 задачи 1
bool searchMatches(double** matrix, int i, int column);// поиск совпадающих строк со столбцами

void displaySeminar_4p2(double** matrix, int row, int column);// вывод семинара 4 задачи 2
bool searchNegativeElement(double** matrix, int i, int column);// поиск отрицательного элемента
double sumElements(double** matrix, int i, int column);// сумма элементов в строках с отрицательным элементом

//activities for seminar 5
void displayData(char* buffer, int size);//вывод исходного текста

void seminar_5();// меню семинара 5
void displaySeminar_5(); // вывод ршения задачи семинара 5
char* fileOpenCheck(int size); // проверка открытия файла
int numberWord(char* buffer, int size); // поиск количества слов
void displayWord(char* buffer, int size); // вывод слов на экран