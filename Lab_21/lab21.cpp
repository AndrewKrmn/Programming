#include <iostream>
#include <fstream>
#include <vector>
#include <random>
using namespace std;
int main()
{
    int a_arr[5][5], b_arr[11][11], c_arr[11][11];
    srand(time(NULL));
    ofstream a_file("a.txt");
    if (a_file.is_open())
    {
        for (size_t i = 0; i < 5; i++)
        {
            for (size_t j = 0; j < 5; j++)
            {
                a_arr[i][j] = rand() % 100;
                a_file << a_arr[i][j] << " ";
            }
            a_file << endl;
        }
        a_file.close();
    }
    else
    {
        cout << "Error" << endl;
    }
    //^--- a.txt
    ofstream b_file("b.txt");
    if (b_file.is_open())
    {
        for (size_t i = 0; i < 11; i++)
        {
            for (size_t j = 0; j < 11; j++)
            {
                b_arr[i][j] = rand() % 100;
                b_file << b_arr[i][j] << " ";
            }
            b_file << endl;
        }
        b_file.close();
    }
    else
    {
        cout << "Error" << endl;
    }
    //^--- b.txt
    ofstream c_file("c.txt");
    if (c_file.is_open())
    {
        for (size_t i = 0; i < 11; i++)
        {
            for (size_t j = 0; j < 11; j++)
            {
                c_arr[i][j] = (a_arr[i][j] * b_arr[i][j] - 3 * pow(b_arr[i][j], 2)) * b_arr[i][j];
                c_file << c_arr[i][j];
            }
            c_file << endl;
        }
        c_file.close();
    }
    else
    {
        cout << "Error" << endl;
    }
    //^--- c.txt
}