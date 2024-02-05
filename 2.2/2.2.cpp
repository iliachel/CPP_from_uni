#include <iostream>
#include <math.h>
using namespace std;



 int main() {
	 double w, x0 = 1, x, xn = 5, delX = 0.5, a = 2.5, i;
	x = x0;
	while (x < xn) 
	{
		if (x > a){
					w = x * pow((x - a), (1 / 3));
			cout << x << " Take  " << i << " From root  " << 1 << "  " << w << endl;
		}

		else if (x == a){
			w = x * sin(a * x);
			cout << x << " Take  " << i << " From root " << 2 << " " << w << endl;
		}

		else if (x < a){
			w = exp(-a * x) * cos(a * x);
			cout << x << " Take  " << i << " From root " << 3 << " " << w << endl;
		}
		x = x0 + i * delX;
		i += 1;
	}

	do
	{
		if (x > a) {
			w = x * pow((x - a), (1 / 3));
			cout << x << " Take  " << i << " From root  " << 1 << "  " << w << endl;
		}

		else if (x == a) {
			w = x * sin(a * x);
			cout << x << " Take  " << i << " From root " << 2 << " " << w << endl;
		}

		else if (x < a) {
			w = exp(-a * x) * cos(a * x);
			cout << x << " Take  " << i << " From root " << 3 << " " << w << endl;
		}
		x = x0 + i * delX;
		i += 1;
	}while (x < xn);
}





