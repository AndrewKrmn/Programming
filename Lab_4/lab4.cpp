#include <iostream>
using namespace std;
void oil_less()
{
    float refuel, first_km, last_km, total_refuel = 0;
    int count = 0;
    cout << "Впиши заправку авто в літрах (4 рази) :";
    while (count < 4)
    {
        cin >> refuel;
        total_refuel += refuel;
        count += 1;
    }
    //^--- кожен раз як користувач вводить n числа,ті числа сумуються 4 рази в пусту змінну
    do
    {
        cout << "Впиши початковий пробіг :";
        cin >> first_km;
        cout << "\nВпиши кінцевий пробіг :";
        cin >> last_km;
        if (first_km > last_km)
        {
            cout << "\nНе може кінцевий пробіг бути меньше за початковий!!!\n";
        }

    } while (first_km > last_km);
    //^--- цикл do while приймає два числа й перевіряє на помилку

    cout << "Всього заправлено літрів : " << total_refuel << "\nВсього проїхано км : " << last_km - first_km << "\nРозхід бензину : " << (last_km - first_km) / total_refuel;
    //^--- вивід результату
}
//^--- функція першого завдання
void average_mark()
{
    float first_mark, second_mark, third_mark, first_kof, second_kof, third_kof;
    cout << "Введи значення в такому порядку : \n (1оцінка 1коофіцієнт 2оцінка 2коофіцієнт 3оцінка 3коофіцієнт)\n";
    cin >> first_mark >> first_kof >> second_mark >> second_kof >> third_mark >> third_kof;
    //^--- ввід данних
    cout << "Середньовагове значення : " << (first_mark * first_kof + second_mark * second_kof + third_mark * third_kof) / (first_kof + second_kof + third_kof) << endl;
    //^--- обчислення й вивід результату
}
//^--- функція другого завдання
int main()
{
    cout << "First task\n";
    oil_less();
    cout << "\nSecond task\n";
    average_mark();
}