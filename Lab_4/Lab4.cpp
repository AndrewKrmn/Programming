#include <iostream>
#include <math.h>

using namespace std;
void task()
{
    int age;
    while (true)
    {
        cout << "Введи свій вік  00 - вихід\n";
        cin >> age;
        if (age >= 18)
        {
            cout << "Ви маєте право голосу!\n";
        }
        //^--- перевірка на вік якщо є 18 або більше результат true
        else
        {
            cout << "У вас немає права вибору,так ,як вам не виповнилося 18\nЧерез : " << 18 - age << " роки ви зможете мати право голосу\n";
        }
        //^--- вивід речення з віком який потрібно досягнути
        if (age == 00)
        {
            break;
        }
        //^--- вихід з циклу
    }
}
//^--- функція 1 задачі
void second_task()
{
    const float x0 = 0, y0 = 0;
    const float r = 5;
    float x, y;
    cout << "Введіть координати точки: ";
    cin >> x >> y;
    float dist = sqrt((x - x0) * (x - x0) + (y - y0) * (y - y0));
    //^--- обчислення точки
    if (dist == 0)
    {
        cout << "Введена точка знаходиться в центрі кола." << endl;
    }
    else if (dist <= r)
    {
        cout << "Введена точка знаходиться на ободі кола." << endl;
    }
    else
    {
        cout << "Введена точка знаходиться за межами кола." << endl;
    }
}

int main()
{
    cout << "=====first task=====" << endl;
    task();
    cout << "=====second task====" << endl;
    second_task();
}
