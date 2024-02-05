//1.2.1 /*
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int a;
//	cin >> a;
//	int counter = 0;
//
//	while (a > 0) {
//		if (a % 10 == 9) {
//			counter++;
//		}
//		a /= 10;
//	}
//	if (counter == 2) {
//		cout << "Yes" << endl;
//	}
//	else {
//		cout << "No" << endl;
//	}
//} */


// 1.2.2

#include <iostream>
using namespace std;

int main (){
double a;
cin >> a;
int aa = a * 100000;
int x = aa % 10;
aa = aa / 10;
int y = aa % 10;
aa = aa / 10;
int z = aa % 10;
aa = aa / 10;
int r = aa % 10;
aa = aa / 10;
int t = aa % 10;
int sum = x + y + z + r + t;
cout << sum;

}
