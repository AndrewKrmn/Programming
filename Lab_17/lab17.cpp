#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    string arr[] = {"tgt", "ntd", "mjy", "uqh", "lfr"};
    for (size_t i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    //^--- виводим початковий масив
    cout << endl;
    sort(arr, arr + sizeof(arr) / sizeof(arr[0]));
    //^--- сортує масив по алфавіту
    for (size_t i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    //^--- вивід модифікованого масива
    cout << endl;
}