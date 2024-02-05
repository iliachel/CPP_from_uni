#include <iostream>
#include <cmath>
using namespace std;

double myFunction(double x) {
	return sin(log(x) + sin(3.14 * x * x)) * sqrt(sqrt(x * x + sin(x) + pow(2.7, cos(x))));
}

int main() {
	double y = myFunction(5);
	cout << y << endl;
}