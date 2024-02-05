#include <iostream> 
#include <stdlib.h>
using namespace std;

int main() {
	double n=3, i, j, x=2, res=0, pre=0;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= (2 * i); j++) {
			pre *= sin(j*x/(2*i +1));
		}
		res += pre;
	}
	cout << res;
};