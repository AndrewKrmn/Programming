#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
int main()
{
    int var = 7, arr[var], counter = 0, counter_1 = 0, add = 1;
    for (int k = 0; k < var; ++k)
    {
        arr[k] = abs(cos(pow(2 * arr[k], 3)) + 2 * sin(arr[k] / 1.2 - 3.4)) + 10.51 * cos(abs(3) * arr[k]);
    }
    //^--- заповнюємо масив
    cout << "Масив : ";
    for (int i = 0; i < var; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    //^--- вивід масиву
    for (int i = 0; i < var; ++i)
    {
        if (arr[counter] < 0)
        {
            cout << arr[counter] << " індекс від'ємний" << endl;
        }
        else
        {
            ++counter_1;
            add *= arr[counter];
            cout << "Номер : " << counter << endl;
        }
        if (counter_1 == 3)
        {
            break;
        }
        ++counter;
    }
    cout << "Добуток перших трьох додатних елементів: " << add << endl;
    cout << "=============================Vector version=====================================" << endl;
    int vector_counter_1 = 0, vector_add = 1;
    vector<int> vector_element(7);
    for (int k = 0; k < vector_element.size(); ++k)
    {
        arr[k] = abs(cos(pow(2 * arr[k], 3)) + 2 * sin(arr[k] / 1.2 - 3.4)) + 10.51 * cos(abs(3) * arr[k]);
    }
    //^--- заповнюємо масив
    cout << "Масив : ";
    for (int i = 0; i < vector_element.size(); ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    //^--- вивід масиву
    for (int i = 0; i < vector_element.size(); ++i)
    {
        if (vector_element[i] < 0)
        {
            cout << vector_element[i] << " від'ємний" << endl;
        }
        else
        {
            ++vector_counter_1;
            vector_add *= vector_element[i];
            cout << "Index : " << i << endl;
        }
        if (vector_counter_1 == 3)
        {
            break;
        }
    }
    cout << "Добуток перших трьох додатних елементів: " << vector_add << endl;
}