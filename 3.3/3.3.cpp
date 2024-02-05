#include <iostream>
#include <cmath>
#include <conio.h>
#include <locale.h> 
#include <iomanip>
#include <clocale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	const int N = 3;
	int a[N][N];
	srand(time(NULL));
	cout << " massiv a" << endl;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			a[i][j] = rand() % 10; 

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			cout << setw(3) << a[i][j];
		cout << endl;
	}
	int sum = 0;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			if ((i >= j && i + j <= N - 1) || (i <= j && i + j >= N - 1))
			{
				sum += a[i][j];
			}
	cout << endl << "Сумма равна = " << sum << endl << endl;


}