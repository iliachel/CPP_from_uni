#include <math.h> 
#include <iostream> 
#include <stdlib.h>
using namespace std;


int main() {

	setlocale(LC_ALL, "Russian");

	int k, l, m, n;
	bool BietF, BietS;
	cin >> k >> l >> m >> n;
	BietF = 0;
	BietS = 0;
	// Proverka

	if ((k < 1) || (k > 8) || (l < 1) || (l > 8) || (m < 1) || (m > 8) || (n < 1) || (n > 8)) {
		cout << "Фигня, нужно другое число";
		return 0;
	}

	//ferz

	if (k == m || l == n) BietF = 1;

	if (abs(k - m) == abs(l - n)){
		BietF = 1;
	}; 

	//slon

	if (abs(m - k) == abs(n - l)) {
		BietS = 1;
	};

	//Proverka 

	if ((BietS == 1) && (BietF == 1)) {
		cout << "Они бьют друг друга";
	}
	else if ((BietS == 0) && (BietF == 1)) {
		cout << "Ферзь бьет слона";
	}
	else
	if ((BietS == 1) && (BietF == 0)) {
		cout << "Слон бьет ферзя";
	}
	else {
		cout << "Никто никого не бьет";
	}
}