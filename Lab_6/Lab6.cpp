#include <iostream>
#include <string>
#include <vector>

using namespace std;

void table()
{

    float Mira = 0, Mira_change = 0;
    int i = 0, number_string = 0;
    while (true)
    {
        cout << "Введіть початкове значення міри : Вийти - 0" << endl;
        cin >> Mira;
        //^---Ввід міри
        if (Mira == 0)
        {
            break;
        }
        //^--- в разі 0 - вихід
        cout << "На скільки змінить значення? : " << endl;
        cin >> Mira_change;
        //^--- ввід зміни
        while (true)
        {
            cout << "Введіть кількість рядків : " << endl;
            cin >> number_string;
            //^--- ввід кількості рядків
            if (number_string > 12)
            {
                cout << "Максимум 12!" << endl;
                break;
            }
            //^--- перевірка,якщо true вихід з циклу
            cout << "--------------------------------" << endl;
            cout << "| Галон(США) | Сак    | Літрів |" << endl;
            cout << "--------------------------------" << endl;
            while (i < number_string)
            {
                cout << "| " << Mira << "          | " << Mira * 0.0347 << " | " << Mira * 3.785 << "  |" << endl;
                cout << "--------------------------------" << endl;
                ++i;
                Mira += Mira_change;
            }
            //^--- вивід результату циклом
            break;
        }
    }
}

int main()
{
    table();
}