/*
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
код легкий для розуміння тому коментарі не став писать
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
*/
#include <iostream>
using namespace std;
void Calc()
{
    int first_operand = 0, second_operand = 0;
    char operation, choice;
    while (choice != 'n')
    //^--- якщо юзер захоче вийти з програми
    {
        cout << "Введіть перший операнд,операцію,другий операнд : " << endl;
        cin >> first_operand >> operation >> second_operand;
        switch (operation)
        {
        case '+':
            cout << "Результат дорівнює : " << first_operand + second_operand << endl;
            cout << "Виконати ще одну операцію (y/n)? ";
            cin >> choice;
            if (choice == 'y')
            {
                continue;
            }
            else
            {
                break;
            }

        case '-':
            cout << "Результат дорівнює : " << first_operand - second_operand << endl;
            cout << "Виконати ще одну операцію (y/n)? ";
            cin >> choice;
            if (choice == 'y')
            {
                continue;
            }
            else
            {
                break;
            }

        case '*':
            cout << "Результат дорівнює : " << first_operand * second_operand << endl;
            cout << "Виконати ще одну операцію (y/n)? ";
            cin >> choice;
            if (choice == 'y')
            {
                continue;
            }
            else
            {
                break;
            }

        case '/':
            cout << "Результат дорівнює : " << first_operand / second_operand << endl;
            cout << "Виконати ще одну операцію (y/n)? ";
            cin >> choice;
            if (choice == 'y')
            {
                continue;
            }
            else
            {
                break;
            }

        default:
            cout << "Error" << endl;
            break;
        }
    }
}
void PrintSymbol()
{
    char symbol;
    unsigned int argument, counter = 1;
    cout << "Введи будь-який символ : ";
    cin >> symbol;
    cout << "Введи будь-яке число не рівне нулю : ";
    cin >> argument;
    if (argument != 0)
    {
        while (counter <= argument)
        {
            cout << counter << " | " << symbol << endl;
            ++counter;
        }
    }
    else
    {
        cout << "Число рівне нулю!" << endl;
    }
}
int main()
{
    Calc();
    PrintSymbol();
}