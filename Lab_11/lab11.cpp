#include <iostream>
#include <string>
#include <math.h>
using namespace std;
void United_State()
{
    string state;
    while (true)
    {
        cout << "Введіть абревіатуру штата з двох букв наприклад AL - Алабама :\n\t\t0 - Вийти" << endl;
        cin >> state;
        //^--- Юзер вводить абревіатуру
        char firstletter = state[0], secondletter = state[1];
        //^--- У дві змінні присвоюється перша літеру й друга
        if (state == "0")
        {
            break;
        }
        //^--- перша перевірка якщо юзер захоче вийти
        else if (state.length() != 2)
        {
            cout << "Абревіатура з ДВОХ букв!" << endl;
        }
        //^--- перевірка довжини рядка
        else
        {
            switch (firstletter)
            //^--- перша перевірка першої літери
            {
            case 'A':
                switch (secondletter)
                //^--- якщо true йде перевірка другої літери й виводить результат
                {
                case 'L':
                    cout << "штат Алабама!" << endl;
                    break;
                case 'K':
                    cout << "штат Аляска!" << endl;
                    break;
                case 'Z':
                    cout << "штат Арізона!" << endl;
                    break;
                case 'R':
                    cout << "штат Арканзас!" << endl;
                    break;

                default:
                    break;
                }
                break;
            case 'C':
                switch (secondletter)
                {
                case 'A':
                    cout << "штат Каліфорнія!" << endl;
                    break;
                case 'O':
                    cout << "штат Колорадо!" << endl;
                    break;
                case 'T':
                    cout << "штат Конектікут!" << endl;
                    break;

                default:
                    break;
                }
                break;
            case 'D':
                cout << "штат Делевер!" << endl;
                break;
            case 'F':
                cout << "штат Флорида!" << endl;
                break;
            case 'G':
                cout << "штат Джорджія!" << endl;
                break;
            case 'H':
                cout << "штат Гавайї!" << endl;
                break;
            case 'I':
                switch (secondletter)
                {
                case 'D':
                    cout << "штат Ідахо!" << endl;
                    break;
                case 'L':
                    cout << "штат Іллінойс!" << endl;
                    break;
                case 'N':
                    cout << "штат Індіана!" << endl;
                    break;
                case 'A':
                    cout << "штат Айова!" << endl;
                    break;

                default:
                    break;
                }
                break;
            case 'M':
                switch (secondletter)
                {
                case 'T':
                    cout << "штат Монтана!" << endl;
                    break;
                case 'E':
                    cout << "штат Мейн!" << endl;
                    break;
                case 'D':
                    cout << "штат Меріленд!" << endl;
                    break;
                case 'A':
                    cout << "штат Массачусетс!" << endl;
                    break;
                case 'I':
                    cout << "штат Мічіган!" << endl;
                    break;
                case 'N':
                    cout << "штат Мінесота!" << endl;
                    break;
                case 'S':
                    cout << "штат Міссісіпі!" << endl;
                    break;
                case 'O':
                    cout << "штат Міссурі!" << endl;
                    break;

                default:
                    break;
                }
                break;
            case 'N':
                switch (secondletter)
                {
                case 'E':
                    cout << "штат Небраска!" << endl;
                    break;
                case 'V':
                    cout << "штат Невада!" << endl;
                    break;
                case 'H':
                    cout << "штат Нью-Хемпшир!" << endl;
                    break;
                case 'J':
                    cout << "штат Нью-Джерсі!" << endl;
                    break;
                case 'M':
                    cout << "штат Нью-Мексіко!" << endl;
                    break;
                case 'Y':
                    cout << "штат Нью-Йорк!" << endl;
                    break;
                case 'C':
                    cout << "штат Північна Кароліна!" << endl;
                    break;
                case 'D':
                    cout << "штат Північна Дакота!" << endl;
                    break;

                default:
                    break;
                }
                break;
            case 'O':
                switch (secondletter)
                {
                case 'H':
                    cout << "штат Огайо!" << endl;
                    break;
                case 'K':
                    cout << "штат Оклахома!" << endl;
                    break;
                case 'R':
                    cout << "штат Орегон!" << endl;
                    break;

                default:
                    break;
                }
                break;
            case 'K':
                switch (secondletter)
                {
                case 'S':
                    cout << "штат Канзас!" << endl;
                    break;
                case 'Y':
                    cout << "штат Кентуккі!" << endl;
                    break;
                default:
                    break;
                }
                break;
            case 'L':
                cout << "штат Луїзіана!" << endl;
                break;
            case 'P':
                cout << "штат Пенсільванія!" << endl;
                break;
            case 'R':
                cout << "штат Род-Фйленд!" << endl;
                break;
            case 'S':
                switch (secondletter)
                {
                case 'C':
                    cout << "штат Південна Кароліна!" << endl;
                    break;
                case 'D':
                    cout << "штат Південна Дакота!" << endl;
                    break;
                default:
                    break;
                }
                break;
            case 'T':
                switch (secondletter)
                {
                case 'N':
                    cout << "штат Теннессі!" << endl;
                    break;
                case 'X':
                    cout << "штат Техас!" << endl;
                    break;
                default:
                    break;
                }
                break;
            case 'U':
                cout << "штат Ута!" << endl;
                break;
            case 'V':
                switch (secondletter)
                {
                case 'T':
                    cout << "штат Вермонт!" << endl;
                    break;
                case 'A':
                    cout << "штат Вірджинія!" << endl;
                    break;
                default:
                    break;
                }
                break;
            case 'W':
                switch (secondletter)
                {
                case 'A':
                    cout << "штат Вашингтон!" << endl;
                    break;
                case 'V':
                    cout << "штат Західна Вірджинія!" << endl;
                    break;
                case 'I':
                    cout << "штат Вісконсін!" << endl;
                    break;
                case 'Y':
                    cout << "штат Вайомінг!" << endl;
                    break;

                default:
                    break;
                }
                break;
            default:
                break;
            }
        }
    }
}
void Math_Switch()
{
    char type;
    float typeA, typeB, typeC;
    cout << "Введи тип робіт :" << endl;
    cin >> type;
    if (type == 'A' || type == 'B' || type == 'C')
    {
        switch (type)
        {
        case 'A':
            typeA = 100 * (abs(sin(2 * 2 - 1.5) + 3 * sin(4 * 2)) + 2.38) + 50;
            cout << "Cума : " << typeA << endl;
            cout << "Сума податку : " << typeA * 0.1 << endl;
            cout << "Кінцева сума : " << typeA - (typeA * 0.1) << endl;
            break;
        case 'B':
            typeB = 150 * (abs(sin(2 * 3 - 1.5) + 3 * sin(4 * 3)) + 2.38) + 100;
            cout << "Cума : " << typeB << endl;
            cout << "Сума податку : " << typeB * 0.1 << endl;
            cout << "Кінцева сума : " << typeB - (typeB * 0.1) << endl;
            break;
        case 'C':
            typeC = 200 * (abs(sin(2 * 4 - 1.5) + 3 * sin(4 * 4)) + 2.38) + 135;
            cout << "Cума : " << typeC << endl;
            cout << "Сума податку : " << typeC * 0.1 << endl;
            cout << "Кінцева сума : " << typeC - (typeC * 0.1) << endl;
            break;
        default:
            break;
        }
    }
    else
    {
        cout << "Error" << endl;
    }
}
void Math_Goto()
{
    char type;
    float total_type, tax;
    cout << "Введи тип робіт :" << endl;
    cin >> type;
    if (type == 'A' || type == 'B' || type == 'C')
    {
        if (type == 'A')
        {
            total_type = 100 * (abs(sin(2 * 2 - 1.5) + 3 * sin(4 * 2)) + 2.38) + 50;
            tax = total_type * 0.1;
            goto totalResult;
        }
        else if (type == 'B')
        {
            total_type = 150 * (abs(sin(2 * 3 - 1.5) + 3 * sin(4 * 3)) + 2.38) + 100;
            tax = total_type * 0.15;
            goto totalResult;
        }
        else if (type == 'C')
        {
            total_type = 200 * (abs(sin(2 * 4 - 1.5) + 3 * sin(4 * 4)) + 2.38) + 135;
            tax = total_type * 0.2;
            goto totalResult;
        }
        else
        {
            cout << "Error" << endl;
        }
    totalResult:
        cout << "Cума : " << total_type << endl;
        cout << "Сума податку : " << tax << endl;
        cout << "Кінцева сума : " << total_type - tax << endl;
    }
}
int main()
{
    cout << "1 task==================" << endl;
    United_State();
    cout << "2 task==================" << endl;
    cout << "Спосіб розвязку через switch :\n=====================" << endl;
    Math_Switch();
    cout << "Спосіб розвязку через goto :\n=================" << endl;
    Math_Goto();
}