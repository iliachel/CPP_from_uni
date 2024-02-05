#include <iostream>
using namespace std;

int main() {
	double a;
	cin >> a;
	int aa = a * 100000;
	double x = aa % 10;
	aa = aa / 10;
	double y = aa % 10;
	aa = aa / 10;
	double z = aa % 10;
	aa = aa / 10;
	double r = aa % 10;
	aa = aa / 10;
	double t = aa % 10;
	double sum = x + y + z + r + t;

	cout << a;

}