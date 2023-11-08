#include <iostream>
#include <math.h>
using namespace std;
char check_literal(char &literal)
{
    if (literal == 'A' || literal == 'B' || literal == 'C')
    {
        cout << "2" << endl;
    }
    else if (literal == 'D' || literal == 'E' || literal == 'F')
    {
        cout << "3" << endl;
    }
    else if (literal == 'G' || literal == 'H' || literal == 'I')
    {
        cout << "4" << endl;
    }
    else if (literal == 'J' || literal == 'K' || literal == 'L')
    {
        cout << "5" << endl;
    }
    else if (literal == 'M' || literal == 'N' || literal == 'O')
    {
        cout << "6" << endl;
    }
    else if (literal == 'P' || literal == 'R' || literal == 'S')
    {
        cout << "7" << endl;
    }
    else if (literal == 'T' || literal == 'U' || literal == 'V')
    {
        cout << "8" << endl;
    }
    else if (literal == 'W' || literal == 'X' || literal == 'Y')
    {
        cout << "9" << endl;
    }
    else
    {
        cout << "Error" << endl;
    }

    return 0;
}
//^--- функція перевіряє змінну і якщо якась умова true виводить результат
void Math(int &i, float &a, float &b)
{

    for (int k = i; k <= i + 5; k++)
    {
        a += abs(sin(2 * k - 1.5)) + 3 * abs(sin(4 * k)) + 2.38;
    }
    for (int k = i; k <= i + 8; k++)
    {
        b *= abs(sin(2 * k - 1.5)) + 3 * abs(sin(4 * k)) + 2.38;
    }
    float z = pow(a, b);
    cout << "\nЗначення i: " << i << "\nЗначення a: " << a << "\nЗначення b: " << b << "\nЗначення z: " << z << endl;
}
//^--- функція другої задачи
int main()
{
    char literal;
    cout << "1 task===========" << endl;
    while (true)
    {
        cout << "Введіть літеру : " << endl;
        cin >> literal;
        cout << "-----------------" << endl;
        if (literal == 'Q' || literal == 'Z')
        //^--- Перевірка на недопустимі літери
        {
            cout << "літери Q і Z не використовуються в телефоні " << endl;
            break;
        }
        else if (isdigit(literal))
        //^--- Перевірка на число
        {
            cout << "Введений не символ а цифра" << endl;
        }
        else
        {
            check_literal(literal);
        }
    }
    cout << "2 task===========" << endl;
    int i = 7;
    float a = 5.0;
    float b = 1.0;
    Math(i, a, b);
}