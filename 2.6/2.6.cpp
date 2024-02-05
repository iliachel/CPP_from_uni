#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;

void main()
{
    setlocale(LC_ALL, "Russian");
    unsigned short int n = 0, t,r,k=0;
    for (t = 1; t <= 65534; t++) {
        for (r = 1; r <= t; r++) {
            if (t % r == 0) {
                n++;
            }
        }
        if (n == 2) {
            k++;
        }
    }
    cout << k;


}