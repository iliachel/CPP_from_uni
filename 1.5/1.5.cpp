#include <math.h> 
#include <iostream> 
#include <stdlib.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	double x, y;
	cin >> x;
	if ((x >= -7.0) && (x <= -6.0)) {
		y = 2;
	}
	else if ((x >= -6.0) && (x <= -2.0)) {
		y = 0.25 * x + 0.5;
	}
	else if ((x >= -2.0) && (x <= 0)) {
		y = (-pow(4 - pow((x + 2), 2), 0.5)+2);
	}
	else if ((x >= 0) && (x <= 2)) {
		y = pow((4 - pow(x, 2)), 0.5);
	}
	else if ((x >= 2) && (x <= 3)) {
		y = -x + 2;
	}
	else {
		cout << "Фигня, нужно другое число";
	}
	cout << y;
}
