#include <iostream>
#include <vector>
#include <map>
#include <utility>
using namespace std;
template <typename T>
vector<T> Sqr(const vector<T> &x)
{
    vector<T> result;
    for (const T &i : x)
    {
        result.push_back(i * i);
    }
    return result;
}
template <typename F, typename S1, typename S2>
map<F, pair<S1, S2>> Sqr(const map<F, pair<S1, S2>> &x)
{
    map<F, pair<S1, S2>> result;
    for (const auto &i : x)
    {
        result[i.first] = {i.second.first * i.second.first, i.second.second * i.second.second};
    }
    return result;
}
int main()
{
    vector<int> v = {1, 2, 3};
    cout << "vector:";
    for (int x : Sqr(v))
    {
        cout << ' ' << x;
    }
    cout << endl;
    map<int, pair<int, int>> map_of_pairs = {{4, {2, 2}}, {7, {4, 3}}};
    cout << "map of pairs:" << endl;
    for (const auto &x : Sqr(map_of_pairs))
    {
        cout << x.first << ' ' << x.second.first << ' ' << x.second.second << endl;
    }
}