#include <math.h> 
#include <iostream> 
#include <stdlib.h>
using namespace std;

int main() {
	int a, b, c, E;
	a = 23;
	b = 25;
	c = 0;
	E = a ^ b | c;
	cout << E;
}

