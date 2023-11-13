#include <iostream>
using namespace std;
int main()
{
    int var = 7, arr[var], counter = 0, add = 1;
    for (int k = 0; k < var; ++k)
    {
        arr[k] = var + 10 * (k + 1);
    }
    //^--- заповнюємо масив
    cout << "Масив : ";
    for (int i = 0; i < var; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    //^--- вивід масиву
    while (counter < 3)
    {
        add *= arr[counter];
        cout << "Номер : " << counter << endl;
        counter++;
    }
    cout << "Добуток перших трьох додатних елементів: " << add << endl;
}