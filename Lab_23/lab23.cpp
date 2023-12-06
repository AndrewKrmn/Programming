#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
class ReversibleString
{
public:
    string ToString() const
    {
        if (c.empty())
        {
            return c;
        }

        return c;
    }
    void ToString(const string &a)
    {
        c = a;
    }
    void Reverse()
    {
        reverse(c.begin(), c.end());
    }

private:
    string c = "\"\"";
};
int main()
{
    ReversibleString strings;
    strings.ToString("wolfrevokcats");
    strings.Reverse();
    cout << strings.ToString() << endl;
    strings.Reverse();
    const ReversibleString &s_ref = strings;
    string tmp = s_ref.ToString();
    cout << tmp << endl;
    ReversibleString empty;
    cout << "" << empty.ToString() << "" << endl;
    return 0;
}