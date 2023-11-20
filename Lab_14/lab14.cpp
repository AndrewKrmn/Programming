#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
    int i = 0, arr[11] = {2000, 2001, 2002, 2003, 2004, 2005, 2006, 2007, 2008, 2009, 2010};
    vector<int> cash_up;
    for (int i : arr)
    {
        float yk = 100 * cos(2.1 * 7) * sin(abs(7)) / 0.15 - 5.8 * i;
        if (yk > 0)
        {
            cout << "Фірма " << i << " року мала прибуток " << yk << endl;
            if (200 >= yk <= 700)
            {
                ++i;
                cash_up.push_back(i);
            }
        }
        else if (yk < 0)
        {
            cout << "Фірма " << i << " року мала збиток " << yk << endl;
        }
    }
    cout << i << " років прибутку були в межах від 200 до 700 у.о ";
    if (cash_up.empty())
    {
        cout << endl;
        goto vector;
    }
    else
    {
        cout << " а саме : ";
        for (int i : cash_up)
        {
            cout << i << " ";
        }
        cout << endl;
    }

vector:
    cout << "===========================Vector version========================================" << endl;
    int vector_i = 0, counter = 0;
    vector<int> years = {2000, 2001, 2002, 2003, 2004, 2005, 2006, 2007, 2008, 2009, 2010};
    vector<int> vector_cash_up;
    while (vector_i < years.size())
    {
        float yk = 100 * cos(2.1 * 7) * sin(abs(7)) / 0.15 - 5.8 * years[vector_i];
        if (yk > 0)
        {
            cout << "Фірма " << years[vector_i] << " року мала прибуток " << yk << endl;
            if (200 >= yk <= 700)
            {
                ++counter;
                vector_cash_up.push_back(years[vector_i]);
            }
        }
        else if (yk < 0)
        {
            cout << "Фірма " << years[vector_i] << " року мала збиток " << yk << endl;
        }
        ++vector_i;
    }
    cout << counter << " років прибутку були в межах від 200 до 700 у.о ";
    if (vector_cash_up.empty())
    {
        return 1;
    }
    else
    {
        cout << " а саме : ";
        for (int i : vector_cash_up)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}