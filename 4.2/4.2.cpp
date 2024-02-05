#include <iostream>
#include <string>
using namespace std;

int main()
{
	int j;
	int x = 0;
	char a[20] = " ", res[] = "", b[] = " a";
	cin >> a;
	for (j = 0; j < size(a); j++)
	{
		if (a[j] == b[0] && a[j + 1] == b[1]) {
			while (a[j] != b[0])
			{
				res[x] = a[j];
				j++;
				x++;
			}
			res[x] = b[0];
		}
	}
	for (int i = 0; i < size(res); i++)
	{
		cout << res[i];
	}
}