#include <math.h> 
#include <iostream> 
#include <stdlib.h>
using namespace std;

int main() {

	setlocale(LC_ALL, "Russian");

	int Schet, n, Slog, Sum;
	cin >> n;
	Slog = 0;
	Sum = 0;
	Schet = 0;

	if (n < 0) {
		cout << "можно использовать только положительные числа";
		exit(0);
	}

	while (Schet < n) {
		Slog++;
		if ((Slog % 3 == 0) && (Slog % 10 == 0)) {
			Sum = Sum + Slog;
			Schet++;
		}
	}
	cout << Sum;


}
