﻿

#include <iostream>
#include <ctime>
#include<algorithm>

const int num = 10;
int a, i, summ;
int mass[num];
int maxNum = mass[0];
int minNum = mass[8];
using namespace std;

int main()
{

	for (i = 0; i < num; i++)
	{
		srand(time(NULL));
		mass[i] = rand() % num;
	}

	sort(mass, mass + num);

	for (int i = 0; i < num; ++i) {
		if (mass[i] > maxNum) {
			maxNum = mass[i];
		}
	}

	for (int i = 0; i < num; ++i) {
		if (mass[i] < minNum) {
			minNum = mass[i];
		}
	}

	for (i = minNum; i < maxNum; i++)
	{
		summ += mass[i];
		if ((mass[i] > maxNum) || (minNum > mass[i]))
		{
			break;
		}

	}
	cout << summ;
}

