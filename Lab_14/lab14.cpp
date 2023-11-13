#include <iostream>
using namespace std;

int main()
{
    int i = 7, year = 0;
    for (int k = 2000; k <= 2010; ++k)
    {
        int uk = 100 * i + 9 * k;
        //^--- формула умовних одиниць
        if (uk > 0)
        {
            cout << "Рік: " << k << ", Прибуток: " << uk << " умовних одиниць" << endl;
        }
        else if (uk >= 200 && uk <= 700)
        {
            year++;
        }
        else
        {
            cout << "Рік: " << k << ", Збитки: " << uk << " умовних одиниць" << endl;
        }
    }
    cout << "Кількість років з прибутком від 200 до 700: " << year << endl;
}