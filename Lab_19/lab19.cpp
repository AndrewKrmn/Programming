#include <iostream>
#include <math.h>
#include <iomanip>
#include <vector>
using namespace std;
int main()
{
    float arr[4][4], akn;
    int counter = 0, counter_1 = 0;
    for (size_t i = 0; i < 4; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            akn = j * abs(sin(pow(j, 2) / 1.5 - 2)) + 11.73 * cos(1.6 * j - 1) + sin(j) * 13.4 * cos(fabs(j)) * sin((pow(j, 2) - 2.25));
            arr[i][j] = akn;
            //^--- заповнення масиву формулою
            if (akn > 3)
            {
                ++counter;
            }
            else if (akn < 9)
            {
                ++counter_1;
            }
            //^--- перевірка
        }
    }
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            cout << setprecision(3) << arr[i][j] << "\t";
        }
        cout << endl;
    }
    //^--- вивід масиву
    cout << "Елементи масиву більше 3 : " << counter << "\nЕлементи масиву меньше 9 : " << counter_1 << endl;
    cout << "==================================Vector version===========================" << endl;
    vector<vector<float>> ar(4, vector<float>(4));
    counter = 0, counter_1 = 0;
    for (size_t i = 0; i < 4; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            akn = j * abs(sin(pow(j, 2) / 1.5 - 2)) + 11.73 * cos(1.6 * j - 1) + sin(j) * 13.4 * cos(fabs(j)) * sin((pow(j, 2) - 2.25));
            ar[i][j] = akn;
            //^--- заповнення масиву формулою
            if (akn > 3)
            {
                ++counter;
            }
            else if (akn < 9)
            {
                ++counter_1;
            }
            //^--- перевірка
        }
    }
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            cout << setprecision(3) << ar[i][j] << "\t";
        }
        cout << endl;
    }
    //^--- вивід масиву
    cout << "Елементи масиву більше 3 : " << counter << "\nЕлементи масиву меньше 9 : " << counter_1 << endl;
}