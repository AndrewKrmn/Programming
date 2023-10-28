#include <iostream>
#include <fstream>
#include <string>

using namespace std;
void check_file()
{
    fstream file("myfile.dat");
    //^--- відкриває файл
    if (file.is_open())
    //^--- перевірка чи файл відкритий
    {
        string line;
        int counter = 0;
        while (getline(file, line))
        //^--- цикл якій виводить весь зміст файлу
        {
            int pos = 0;
            //^--- змінна в якій буде зберігатись позиція підрядка
            while ((pos = line.find("!=", pos)) != string::npos)
            //^--- цикл якій шукає підрядок
            {
                counter++;
                pos += 2;
                //^--- якщо підрядок знайдено лічильник спрацьовує і позиція підрядка переміщується на 2
            }
        }
        cout << "Всього знаків '!=' стільки : " << counter << endl;
        //^--- вивід результату
    }
    else
    {
        cout << "Error!" << endl;
        //^---якщо файл не відкрився
    }
}
int main()
{
    check_file();
    return 0;
}
