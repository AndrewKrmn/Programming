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
    cout << "Перша відстань :" << first * 0.25 << "\n"
         << "Друга відстань :" << second * 0.25 << "\n" //<--- вивід всіх відстаней
         << "Третя відстань :" << third * 0.25 << "\n"
         << "Четверта відстань :" << fouth * 0.25 << endl;

    total = math(first * 0.25, second * 0.25, third * 0.25, fouth * 0.25); //<--- запис функції в змінну

    cout << "Повний шлях: " << total << endl; //<--- вивід змінної

    return 0;
}
