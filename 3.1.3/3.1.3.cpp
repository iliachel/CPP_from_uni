#include <iostream>

using namespace std;

int main()
{
    const int size = 10;
    int arr[size] = { 0 };
    int ch;
    enum enmArrayInit { Init, Random, Input };

    cout << "Выберите тип инициализации:\n"
        << (int)enmArrayInit::Init << ". константами\n"
        << (int)enmArrayInit::Random << ". случайными числами\n"
        << (int)enmArrayInit::Input << ". ввод с клавиатуры\n";
    cout << "любая другая кнопка завершит программу\n  ваш выбор:  ";
    cin >> ch;
    switch ((enmArrayInit)ch)
    {
    case enmArrayInit::Init:
    {
        for (i = 0; i < row; i++)
            for (j = 0; j < col; j++)
                arr[i] = i + j;
        break;
    }
    case enmArrayInit::Random:
    {
        srand(time(NULL));
        for (i = 0; i < row; i++)
            for (j = 0; j < col; j++)
                arr[i] = rand() % 100;
        break;
    }
    case enmArrayInit::Input:
    {
        for (i = 0; i < row; i++)
            for (j = 0; j < col; j++)
            {
                cout << "array[" << i + 1 << "][" << j + 1 << "]=";
                cin >> arr[i];
            }
        break;
    }
    default:  cout << "программа завершается" << endl;
        return 0;
    }

    int temp;

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}