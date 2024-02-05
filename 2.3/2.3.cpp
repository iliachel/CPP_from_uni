#include <iostream>
using namespace std;

void main()
{
    setlocale(LC_ALL, "Russian");
    int n, m, num, maxNum, D, maxKolvoDel = 0, maxChDel;
    cout << "введите n:\n";
    cin >> n;
    cout << "введите m:\n";
    cin >> m;

    if (m >= n) {
       for (num = n; num <= m; num++)
        {

            D = 1;

            for (int i = 1; i <= num / 2; i++)

                if (num % i == 0) D++;

            if (D > maxKolvoDel) {
                maxKolvoDel = D;
                maxNum = num;
                
            }
            
        }
       for (num = n; num <= m; num++)
       {

           D = 1;

           for (int i = 1; i <= num / 2; i++)

               if (num % i == 0) D++;

           if (D == maxKolvoDel) {
               maxKolvoDel = D;
               maxNum = num;
               cout << "число с наибольшим колличеством делителей: " << maxNum << ", у которо " << maxKolvoDel << " делителя\n";
           }

       }

    } else {
        cout << "выбран неправильный диапозон";
    }


}