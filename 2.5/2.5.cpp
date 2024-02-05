#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;

void main()
{
    setlocale(LC_ALL, "Russian");
    int n, k=1, x, kol = 1,a,b, del1, del2, del3,mist=0;
    cout << "введите n:\n";
    cin >> n;
    x = n;
    while ((x /= 10) > 0) kol++;
    for (int t = kol; t <= n; t++) {
        for (int c = 1; c <= kol - 1; c++) {
            del1 = pow(10, c);
            del2 = pow(10, c + 1);
            del3 = pow(10, c - 1);
            a = (t % del1) / del3;
            b = (t % del2) / del1;
            if (b >= a) mist++;
        };
        if (mist == 0) cout << t << " ";
    }

}