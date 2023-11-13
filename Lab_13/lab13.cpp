#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
void Math(float &a, float &b, float &h)
{
    int sum = 0, neg = 0;
    cout << "x\ty" << endl;
    for (float x = a; x <= b; x += h)
    {
        float y = (x * x) + 8 * x;
        cout << fixed << setprecision(2) << x << "\t" << y << endl;
        if (y > 0)
        {
            sum += y;
        }
        else if (y < 0)
        {
            neg++;
        }
    }
    //^--- вивід і обчислення таблиці
    cout << "Сума додатних значень: " << sum << "\nКількість від'ємних значень: " << neg << endl;
}
int main()
{
    float a = 0.0;
    float b = 7.0;
    float h = 0.1;
    Math(a, b, h);
}