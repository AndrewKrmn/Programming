#include <iostream>
#include <string>
#include <vector>

using namespace std;

void table()
{
    vector<string> names1 = {"Унція", "Драхм", "Карат", "Гран", "Пайп", "Галон(брит)", "Галон(США)", "Чарка", "Квартет", "Страйк", "Челдрон", "Сак"};
    vector<string> names2 = {"г", "г", "г", "г", "пек", "галон(США)", "сак", "л", "л", "л", "л", "л"};
    vector<string> names3 = {"Карати", "Унцій", "Гран", "Драхм", "л", "л", "л", "пайпа", "чарок", "чарок", "пека", "страйка"};
    vector<float> initial_number1 = {28.353495, 1.77185, 0.2, 0.068, 54.18, 1.2, 0.0347, 0.0568, 291, 72.73, 1.309, 109};
    vector<float> initial_number2 = {142, 0.06249, 2.9412, 0.038378, 477.33, 4.546, 3.785, 0.00012, 5123.24, 1280.46, 0.149, 1.499};
    //^--- 1 вектор = 1 міра в таблиці,2 вектор 2 міра,3 вектор 3 міра,4 вектор перші множники,5 вектор другі множники
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
            while (i < number_string)
            {
                cout << "----------------------------------------------" << endl;
                cout << "| " << Mira << " " << names1[i] << " = " << Mira * initial_number1[i] << names2[i]
                     << " = " << Mira * initial_number2[i] << " " << names3[i] << " |" << endl;
                ++i;
                Mira += Mira_change;
            }
            //^--- вивід результату циклом
            cout << "----------------------------------------------" << endl;
            break;
        }
    }
}

int main()
{
    table();
}