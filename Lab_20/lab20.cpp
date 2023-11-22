#include <iostream>
#include <random>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
    srand(time(NULL));
    string k[6] = {"Івано-Франківськ", "Клузів", "Крихівці", "Угринів", "Тисмениця", "Микитинці"};
    string n[5] = {"Марцинків", "Сербин", "Богачов", "Шкутяк", "Стефанишин"};
    float results[6][5], max_number = results[1][0];
    int columnIndex;
    for (size_t i = 0; i < 6; i++)
    {
        for (size_t j = 0; j < 5; j++)
        {
            results[i][j] = rand() % 500 + 50 * 7;
        }
    }
    cout << "Кандидати -->    ";
    for (size_t i = 0; i < 5; i++)
    {
        cout << n[i] << " ";
    }
    cout << endl;
    for (size_t i = 0; i < 6; i++)
    {
        cout << k[i] << " ";
        for (size_t j = 0; j < 5; j++)
        {
            cout << results[i][j] << " ";
            if (results[1][j] > max_number)
            {
                max_number = results[1][j];
                columnIndex = j;
            }
        }
        cout << endl;
    }
    cout << "Клузів макс кількість голосів у " << n[columnIndex] << endl;
}