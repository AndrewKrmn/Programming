#include <iostream> //<--- Стандартна бібліотека

using namespace std; //<--- Директива

float math(float a, float b, float c, float d)
{ //<--- функція обчислення всього шляху
    float all = float(int(((a + b + c + d) / 4) * 10 + 0.5)) / 10;
    return all;
}
int main() //<--- Головна функція
{
    float first = 1.5, second = 2.3, third = 5.9, fouth = 4.0, total = 0;
    //^--- змінні
    cout << "Перша відстань :" << first << "\n"
         << "Друга відстань :" << second << "\n" //<--- вивід всіх відстаней
         << "Третя відстань :" << third << "\n"
         << "Четверта відстань :" << fouth << endl;

    total = math(first, second, third, fouth); //<--- запис функції в змінну

    cout << "Повний шлях: " << total << endl; //<--- вивід змінної

    return 0;
}
