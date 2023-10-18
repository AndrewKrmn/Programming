#include <iostream>
#include <math.h>

using namespace std;

void average_mark()
{
    long id;
    int avarage_mark, mark = 0, sum_mark = 0, counter = 0;
    do
    {

        cout << "Впиши ідентифікаційний номер : Вийти - 0" << endl;
        cin >> id;
        //^--- Ввід ідентифікаційного номера
        if (id == 0)
        {
            break;
        }
        //^--- Якщо юзер захоче вийти з програми, break стопить цикл

        cout << "\n Введи 4 екзаменаційні оцінки : " << endl;
        while (counter < 4)
        {
            cin >> mark;
            if (mark > 5)
            {
                cout << "5 бальна система!" << endl;
                counter = 0, sum_mark = 0;
                break;
            }
            else if (mark < 0)
            {
                cout << "число від'ємне або є нулем" << endl;
                counter = 0, sum_mark = 0;
                break;
            }
            //^--- Два if перевіряють змінну mark якщо false,counter й sum_mark обнуляються і цикл припиняється

            sum_mark += mark;
            //^--- змінна додає і присвоює mark 4 рази
            ++counter;
        }

    } while (counter < 4);
    avarage_mark = sum_mark / 4;
    //^--- Середнє арифметичне
    if (avarage_mark < 4 && avarage_mark > 3)
    {
        cout << "Ідентифікаційний номер : " << id << "\nСередня оцінка : " << avarage_mark << "\nЗадовільно!" << endl;
    }
    else if (avarage_mark >= 4 && avarage_mark < 5)
    {
        cout << "Ідентифікаційний номер : " << id << "\nСередня оцінка : " << avarage_mark << "\nДобре!" << endl;
    }
    else if (avarage_mark == 5)
    {
        cout << "Ідентифікаційний номер : " << id << "\nСередня оцінка : " << avarage_mark << "\nВідмінно!" << endl;
    }
    else
    {
        cout << "Ідентифікаційний номер : " << id << "\nСередня оцінка : " << avarage_mark << "\nНе складено!" << endl;
    }
    //^--- Вивід результату з перевіркою заявленою в задачі
}

int main()
{
    average_mark();
}