// початковий вміст file.txt 3 10 42 100 33 -4 532 5 44 27 95
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
int main()
{
    ifstream file("file.txt");
    //^--- відкриваємо файл
    float A, B;
    int counter = 0;
    cout << "Введи два числа : " << endl;
    cin >> A >> B;
    vector<float> numbers;
    float number;
    while (file >> number)
    {
        numbers.push_back(number);
    }
    file.close();
    //^--- вводим вміст у вектор і закриваєм файл
    ofstream outputFile("file.txt");
    //^--- відкриваємо для запису
    for (size_t i = 0; i < numbers.size(); i++)
    {
        if (numbers[i] > A && numbers[i] < B)
        //^--- перевірка
        {
            counter++;
        }
        else
        {
            outputFile << numbers[i] << " ";
            //^--- запис у файл
        }
    }
    outputFile.close();
    cout << "Кількість видалених елементів : " << counter << endl;
}