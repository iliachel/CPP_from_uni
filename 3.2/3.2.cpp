#include <iostream> 
#include <stdlib.h>
#include <iomanip>
#include <clocale>

using namespace std;

double add(double a[3][3], int row, int col)
{
    double b[2][2];
    int i, j, bi, bj;

    for (i = 0, bi = 0; i < 3; i++)
    {
        if (i != row)
        {
            for (j = 0, bj = 0; j < 3; j++)
                if (j != col)
                {
                    b[bi][bj] = a[i][j];
                    bj++;
                }
            bi++;
        }
    }

    if ((row + col) % 2)
        return b[0][1] * b[1][0] - b[0][0] * b[1][1];
    else
        return b[0][0] * b[1][1] - b[0][1] * b[1][0];
}


//определитель матрицы
double det(double a[3][3])
{
    int i;
    double sum;

    for (i = 0, sum = 0.; i < 3; i++)
        sum += a[i][0] * add(a, i, 0);

    return sum;
}


//обратная матрица
void inverse(double a[3][3], double d)
{
    double a1[3][3], cur;
    int i, j;

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            a1[i][j] = add(a, i, j) / d;

    for (i = 0; i < 3; i++)
        for (j = i + 1; j < 3; j++)
        {
            cur = a1[i][j];
            a1[i][j] = a1[j][i];
            a1[j][i] = cur;
        }

    cout << "\nInverse:\n";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            cout << setw(7) << a1[i][j];
        cout << "\n";
    }

}


int main() {
	setlocale(LC_ALL, "Russian");
    srand(time(NULL));
	const int N = 3;
	double X[N][N] = {0};
    unsigned short int DiagM[N][N] = { 0 };

    enum eXayInit
    {
        Uninited = 0, WithConst, WithRand, ByUser,
    };

    setlocale(LC_ALL, "rus");
    cout << " Выберите тип инициализации для X:\n"
        << eXayInit::WithConst << ".константами\n"
        << eXayInit::WithRand << ".случайными числами\n"
        << eXayInit::ByUser << ".ввести вручную\n";
    cout << "Любая другая кнопка завершит программу\n Ваш выбор: ";

    int ch = 0;
    cin >> ch;
    switch (ch)
    {
    case eXayInit::WithConst:
    {                                                                     // заполнение массива значениями индексов
        for (unsigned int i = 0; i < N; i++) {
            for (unsigned int t = 0; t < N; t++) {
                int c = 0;
                X[i][t] = c;
                c++;
            };
        };
        break;
    }
    case eXayInit::WithRand:      
    {                                                                     // Инициализация массива случайными числами
        for (unsigned int i = 0; i < N; i++) {
            for (unsigned int t = 0; t < N; t++) {
                X[i][t] = rand() % 100;
            };
        };
        break;
    }
    case eXayInit::ByUser:        
    {                                                                    // ввод элементов массива с клавиатуры
        for (unsigned int i = 0; i < N; i++) {
            for (unsigned int t = 0; t < N; t++) {
                cin >> X[i][t];
            };
        };
        break;
    }
    default:  cout << "Программа завершается" << endl;
        return 0;
    }               
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << setw(7) << X[i][j];
        cout << "\n";
    }
    cout << endl;
    enum eXayInit2
    {
        Uninited2 = 0, WithConst2, WithRand2, ByUser2,
    };

    


	for (int s = 0, sz = N - 1; s < N; sz--, s++) {
		DiagM[sz][s] = X[s][sz];
	};



	for (int s = 0; s < N; s++) {
		DiagM[s][s] = X[s][s];
	};
	for (int s = 0, sz = N-1; s < N;sz--, s++) {
		DiagM[sz][s] = X[sz][s];
	};
	for (unsigned int i = 0; i < N; i++) {
		for (unsigned int t = 0; t < N; t++) {
			if (DiagM[i][t] == 52428) DiagM[i][t] = 0;
		};
	};
	cout << "________________________________________" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << setw(7) << setiosflags(ios::fixed) << setprecision(2) << DiagM[i][j];
        cout << "\n";
    }
	cout << "________________________________________" << endl;
	int max_ch = 0;
	for (unsigned int i = 0; i < N; i++) {
		for (unsigned int t = 0; t < N; t++) {
			if (DiagM[i][t] > max_ch) max_ch = DiagM[i][t];
		};
	};

	cout << "\nMax_Num:" << max_ch  << endl;
    cout << "________________________________________" << endl;
    double determinant;
    int i, j;

    srand(time(NULL));
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            X[i][j] = 1.5 * (rand() % 9 - 5);

    cout << "Xay:\n";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            cout << setw(7) << setiosflags(ios::fixed) << setprecision(2) << X[i][j];
        cout << "\n";
    }

    determinant = det(X);
    cout << "\nDeterminant: " << determinant << "\n";

    if (determinant) inverse(X, determinant);
    else cout << "Inverse impossible";

    getchar();
    return 0;



        
    }
