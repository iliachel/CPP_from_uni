#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
using namespace std;

int main()
{
	const int MAX = 26;
	char a[MAX];
	char b[MAX];
	char c[MAX];
	char g[7] = "aeiouy";
	cin.getline(a, MAX);
	cout << a << endl;
	int j = 0;
	for (int i = 0; a[i] != '\0'; i++) {
		bool no_repeat = true;
		for (int k = 0; a[k]; k++) {
			if (i != k && a[k] == a[i]) {
				no_repeat = false;
			}
		}
		if (no_repeat)
		{
			b[j] = a[i];
			j++;
		}
	}
	b[j] = '\0';

	cout << b << endl;
	int p = 0;
	for (int i = 0; g[i]; i++) {
		for (int k = 0; a[k]; k++) {
			if (g[i] == a[k]) {
				c[p] = g[i];
				p++;
			}
		}
	}
	c[p] = '\0';

	cout << c;

}