#include <iostream>
#include <cmath>
using namespace std;

template < typename T >
void print(T *row, int n) {
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << row[i] << " ";
	}
	cout << endl;
}

template < typename T >
void print(T* row, int n, int s, int p) {
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << row[i] << " ";
	}
	cout << "\nсравнений:" << s << ", peremeshenii:" << p << endl;
}

template < typename T >
void vozr(T * row, int n) {
	for (int i = 0; i < n; i++)
	{
		row[i] = i + 1;
	}
}

template < typename T >
void ubiv(T* row, int n) {
	for (int i = 0; i < n; i++)
	{
		row[i] = n - i;
	}
}

template < typename T >
void sluch(T* row, int n) {
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		row[i] = rand() % 10;
	}
}

template < typename T >
void viborom(T* row, int n, int& s, int& p)
{

	int min = 0; // для записи минимального значения
	T buf = 0; // для обмена значениями 
	for (int i = 0; i < n; i++)
	{
		min = i; // запомним номер текущей ячейки, как ячейки с минимальным значением
		// в цикле найдем реальный номер ячейки с минимальным значением
		for (int j = i + 1; j < n; j++) {
			if (row[j] < row[min]) {
				min = j;
			}
		}
		// cделаем перестановку этого элемента, поменяв его местами с текущим
		s++;
		if (i != min)
		{
			p++;
			buf = row[i];
			row[i] = row[min];
			row[min] = buf;
		}
	}
}

int binPoisk(int * a, int item, int low, int high, int &s)
{
	while (low <= high) {
		int mid = low + (high - low) / 2;
		s++;
		if (item == a[mid])
			return mid + 1;
		else if (item > a[mid])
			low = mid + 1;
		else
			high = mid - 1;
	}

	return low;
}

int binPoisk(double* a, double item, int low, int high, int& s)
{
	while (low <= high) {
		int mid = low + (high - low) / 2;
		s++;
		if (item == a[mid])
			return mid + 1;
		else if (item > a[mid])
			low = mid + 1;
		else
			high = mid - 1;
	}

	return low;
}

int binPoisk(char* a, char item, int low, int high, int& s)
{
	while (low <= high) {
		int mid = low + (high - low) / 2;
		s++;
		if (item == a[mid])
			return mid + 1;
		else if (item > a[mid])
			low = mid + 1;
		else
			high = mid - 1;
	}

	return low;
}

int binPoisk(float* a, float item, int low, int high, int& s)
{
	while (low <= high) {
		int mid = low + (high - low) / 2;
		s++;
		if (item == a[mid])
			return mid + 1;
		else if (item > a[mid])
			low = mid + 1;
		else
			high = mid - 1;
	}

	return low;
}

template < typename T >
void sortBinVstavkoi(T * a, int n, int &s, int &p)
{
	for (int i = 1; i < n; ++i) {
		int j = i - 1;
		T selected = a[i];

		// find location where selected should be inserted
		int loc = binPoisk(a, selected, 0, j, s);

		// Move all elements after location to create space
		while (j >= loc) {
			a[j + 1] = a[j];
			p++;
			j--;
		}
		a[j + 1] = selected;
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	const int N = 10;
	int row[N] = {};
	int a = -1, sravnenii = 0, peremeshenii = 0;

	cout << "Выберите способ заполнения массива:\n1)по возрастанию\n2)по убыванию\n3)случайным образом" << endl;
	cin >> a;

	switch (a) {
	case 1:
		vozr(row, N);
		break;
	case 2:
		ubiv(row, N);
		break;
	case 3:
		sluch(row, N);
		break;
	default:
		break;
	}

	print(row, N);

	cout << "Выберите способ сортировки массива:\n1)выбором\n2)бинарной вставкой" << endl;
	cin >> a;
	int n = sizeof(row) / sizeof(row[0]);

	switch (a) {
	case 1:
		viborom(row, N, sravnenii, peremeshenii);
		break;
	case 2:
		sortBinVstavkoi(row, n, sravnenii, peremeshenii);
		break;
	default:
		break;
	}
	print(row, N, sravnenii, peremeshenii);
}

