#include <iostream>
using namespace std;
float PrintTemp(float &Celsium)
{
    float Farenheit = 1.8 * Celsium + 32.0;
    //^--- обчислення
    cout << Celsium << " градусів за Цельсієм дорівнює " << Farenheit << " градусів за Фаренгейтом" << endl;
    return 0;
}
//^--- функція першого завдання
float PrintGarm(float &number1, float &number2)
{
    float avrg_garm = 2.0 / ((1 / number1) + (1 / number2));
    //^--- обчислення середнього гармонійного
    cout << "Середнє гармонійне : " << avrg_garm << endl;
    return 0;
}
int PrintFactorial(int &factorial)
{
    int total = 1, counter = 1;
    if (factorial == 0)
    //^--- перевірка на нуль
    {
        cout << "Факторіал " << factorial << "! рівний 1" << endl;
    }
    else
    {
        while (factorial >= counter)
        {
            total *= counter;
            ++counter;
        }
        //^--- цикл якій обчислює факторіал заданого числа

        cout << "Факторіал " << factorial << "! дорівнює " << total << endl;
        //^--- вивід результату
    }

    return 0;
}
int main()
{
    cout << "1 task =======================" << endl;
    float Celsuim;
    cout << "Введи температуру в градусах за Цельсієм :";
    cin >> Celsuim;
    PrintTemp(Celsuim);
    //^--- Перше завдання
    cout << "2 task =======================" << endl;
    float number1, number2;
    while (true)
    {
        cout << "Введи пару чисел: ";
        cin >> number1 >> number2;
        if (number1 == 0 || number2 == 0)
        //^--- перевірка чи одне з чисел дорівнює нулю
        {
            cout << "Одне з чисел дорівнює нулю!" << endl;
            break;
        }
        else
        {
            PrintGarm(number1, number2);
            break;
            //^--- виклик функції для обрахунку якщо числа не дорівнюють нулю
        }
    }
    //^--- Друге завдання
    cout << "3 task =======================" << endl;
    int factorial;
    cout << "Введи ціле число : ";
    cin >> factorial;
    PrintFactorial(factorial);
    //^--- виклик функції
    //^--- Третє завдання
}