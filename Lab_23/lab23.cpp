#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string c;
class ReversibleString
{
public:
    void ToString(const string &a)
    {
        c = a;
    }
    void Reverse()
    {
        reverse(c.begin(), c.end());
        cout << c << endl;
    }
};
int main()
{
    ReversibleString strings;
    strings.ToString("wolfrevokcats");
    strings.Reverse();
}