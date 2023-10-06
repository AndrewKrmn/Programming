
#include <iostream>
#include <math.h>
//^--- бібліотеки
using namespace std;
//^--- директива
void first_task()
{
    float m, v, h;
    cout << "Введіть масу тіла (кг): ";
    cin >> m;
    cout << "Введіть швидкість тіла (м/с): ";
    cin >> v;
    cout << "Введіть висоту (м): ";
    cin >> h;
    //^--- ввід данних
    float g = 9.8;
    //^--- Прискорення вільного падіння(на Землі)
    float kinetic_energy = 0.5 * m * pow(v, 2);
    float potential_energy = m * g * h;
    //^--- обчислення кінетичної і потенційної енергії
    cout << "Кінетична енергія: " << kinetic_energy << " Дж" << endl;
    cout << "Потенціальна енергія: " << potential_energy << " Дж" << endl;
    //^--- вивід даних
}
//^--- функція 1 першого завдання
void second_task()
{
    float xA = 0.0, yA = 0.0, xB, yB, xC, yC;
    //^--- змінні
    cout << "Введіть координати вершини B (xB yB): ";
    cin >> xB >> yB;
    cout << "Введіть координати вершини C (xC yC): ";
    cin >> xC >> yC;
    //^--- ввід координат
    float a = sqrt(pow(xB - xC, 2) + pow(yB - yC, 2));
    float b = sqrt(pow(xC - xA, 2) + pow(yC - yA, 2));
    float c = sqrt(pow(xA - xB, 2) + pow(yA - yB, 2));
    //^--- обчислення довжин сторін трикутника
    float alpha = acos((b * b + c * c - a * a) / (2 * b * c));
    float beta = acos((c * c + a * a - b * b) / (2 * c * a));
    float gamma = M_PI - alpha - beta;
    //^--- Обчислення кутів трикутника в радіанах
    float hb = b * sin(alpha);
    float Wa = (2 * b * c / (b + c)) * cos(alpha / 2);
    //^--- Обчислення висоти hb та бісектриси Wa
    cout << "Сторони трикутника: a = " << a << ", b = " << b << ", c = " << c << endl;
    cout << "Кути трикутника (в радіанах): alpha = " << alpha << ", beta = " << beta << ", gamma = " << gamma << endl;
    cout << "Висота hb = " << hb << endl;
    cout << "Бісектриса Wa = " << Wa << endl;
    //^--- вивід результату
}
//^--- функція другої задачі
int main()
{
    cout << "====================1 task=======================\n";
    first_task();
    cout << "====================2 task=======================\n";
    second_task();
    return 0;
}
