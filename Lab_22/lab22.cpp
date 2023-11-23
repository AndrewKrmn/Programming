#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
vector<string> letters;
class SortedStrings
{
public:
    void AddString(const string &s)
    {
        letters.push_back(s);
    }
    //^--- пушим у вектор
    vector<string> GetSortedStrings()
    {
        sort(letters.begin(), letters.end());
        //^--- сортуєм
        for (size_t i = 0; i < letters.size(); i++)
        {
            cout << letters[i] << " ";
        }
        cout << endl;
        return letters;
        //^--- виводим
    }
};
int main()
{
    SortedStrings strings;
    int s;
    string letter;
repeat:
    cout << "Скількі разів ти хочеш ввести рядки? : ";
    cin >> s;
    cout << endl;
    for (size_t i = 0; i < s; i++)
    {
        cin >> letter;
        strings.AddString(letter);
    }
    //^--- вводить
    cout << "Продовжити набір - 1, чи вивести відсортовані рядки - 2 ";
    cin >> s;
    if (s == 1)
    {
        goto repeat;
    }
    else if (s == 2)
    {
        strings.GetSortedStrings();
    }
    //^--- перевірка
}