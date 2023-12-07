#include <iostream>
#include <string>
using namespace std;
class Animal
{
public:
    const string Name;
    Animal(const string &name) : Name(name) {}
};

class Dog : public Animal
{
public:
    Dog(const string &name) : Animal(name) {}
    void Bark()
    {
        cout << Name << " barks: woof!" << endl;
    }
};
int main()
{
    Dog pet("Rex");
    pet.Bark();
    cout << pet.Name << endl;
}