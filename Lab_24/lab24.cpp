#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;
class Rational
{
public:
    Rational()
    {
        p = 0, q = 1;
    }
    //^--- Дефолт конструктор
    Rational(int numerator, int denominator)
    {
        int gcd = __gcd(abs(numerator), abs(denominator));
        //^--- скорочення дробу
        p = numerator / gcd, q = denominator / gcd;
        //^--- ділення НСД на чисельник та знаменник
        if (q < 0)
        //^--- якщо знаменник від'ємний
        {
            p = -p, q = -q;
        }
        else if (p == 0)
        //^--- якщо чисельник дорівнює 0
        {
            q = 1;
        }
    }
    int Numerator() const
    {
        return p;
    }
    int Denominator() const
    {
        return q;
    }
    bool operator==(const Rational &number_bool) const
    //^--- оператор порівняння
    {
        return p == number_bool.p && q == number_bool.q;
        //^--- повертає порівняння
    }
    Rational operator+(const Rational &number) const
    //^--- оператор додавання
    {
        int new_p = p * number.q + number.p * q, new_q = q * number.q;
        //^--- обчислення дробів
        return Rational(new_p, new_q);
    }

    Rational operator-(const Rational &number) const
    {
        int new_p = p * number.q - number.p * q, new_q = q * number.q;
        return Rational(new_p, new_q);
    }

    Rational operator*(const Rational &multiplie) const
    {
        int new_p = p * multiplie.p, new_q = q * multiplie.q;
        return Rational(new_p, new_q);
    }

    Rational operator/(const Rational &divide) const
    {
        int new_p = p * divide.q, new_q = q * divide.p;
        return Rational(new_p, new_q);
    }
    friend ostream &operator<<(ostream &str, const Rational &fract)
    {
        str << fract.p << "/" << fract.q;
        return str;
        //^--- виводить сам дріб
    }
    friend istream &operator>>(istream &str, Rational &fract)
    {
        char divide;
        int p, q;
        if (str >> p >> divide >> q)
        //^--- зчитує дріб з потоку
        {
            if (divide == '/')
            {
                fract = Rational(p, q);
            }
            //^--- якщо true,fract присвоює конструктор з параметрами
        }
        return str;
    }

private:
    int p, q;
};
int main()
{

    {
        const Rational r(3, 10);
        if (r.Numerator() != 3 || r.Denominator() != 10)
        {
            cout << "Rational(3, 10) != 3/10" << endl;
            return 1;
        }
    }
    {
        const Rational r(8, 12);
        if (r.Numerator() != 2 || r.Denominator() != 3)
        {
            cout << "Rational(8, 12) != 2/3" << endl;
            return 2;
        }
    }
    {
        const Rational r(-4, 6);
        if (r.Numerator() != -2 || r.Denominator() != 3)
        {
            cout << "Rational(-4, 6) != -2/3" << endl;
            return 3;
        }
    }
    {
        const Rational r(4, -6);
        if (r.Numerator() != -2 || r.Denominator() != 3)
        {
            cout << "Rational(4, -6) != -2/3" << endl;
            return 3;
        }
    }
    {
        const Rational r(0, 15);
        if (r.Numerator() != 0 || r.Denominator() != 1)
        {
            cout << "Rational(0, 15) != 0/1" << endl;
            return 4;
        }
    }
    {
        const Rational defaultConstructed;

        if (defaultConstructed.Numerator() != 0 || defaultConstructed.Denominator() != 1)
        {
            cout << "Rational() != 0/1" << endl;
            return 5;
        }
    }
    cout << "OK 1" << endl;
    {
        Rational r1(4, 6);
        Rational r2(2, 3);
        bool equal = r1 == r2;
        if (!equal)
        {
            cout << "4/6 != 2/3" << endl;
            return 1;
        }
    }
    {

        Rational a(2, 3);
        Rational b(4, 3);
        Rational c = a + b;
        bool equal = c == Rational(2, 1);
        if (!equal)
        {
            cout << "2/3 + 4/3 != 2" << endl;
            return 2;
        }
    }
    {
        Rational a(5, 7);
        Rational b(2, 9);
        Rational c = a - b;
        bool equal = c == Rational(31, 63);
        if (!equal)
        {
            cout << "5/7 - 2/9 != 31/63" << endl;
            return 3;
        }
    }
    cout << "OK 2" << endl;
    {
        Rational a(2, 3);
        Rational b(4, 3);
        Rational c = a * b;
        bool equal = c == Rational(8, 9);
        if (!equal)
        {
            cout << "2/3 * 4/3 != 8/9" << endl;
            return 1;
        }
    }
    {
        Rational a(5, 4);
        Rational b(15, 8);
        Rational c = a / b;
        bool equal = c == Rational(2, 3);
        if (!equal)
        {
            cout << "5/4 / 15/8 != 2/3" << endl;
            return 2;
        }
    }
    cout << "OK 3" << endl;
    {
        ostringstream output;
        output << Rational(-6, 8);
        if (output.str() != "-3/4")
        {
            cout << "Rational(-6, 8) should be written as \"-3/4\"" << endl;
            return 1;
        }
    }
    {
        istringstream input("5/7");
        Rational r;
        input >> r;
        bool equal = r == Rational(5, 7);
        if (!equal)
        {
            cout << "5/7 is incorrectly read as " << r << endl;
            return 2;
        }
    }
    {
        istringstream input("");
        Rational r;
        bool correct = !(input >> r);
        if (!correct)
        {
            cout << "Read from empty stream works incorrectly" << endl;
            return 3;
        }
    }
    {
        istringstream input("5/7 10/8");
        Rational r1, r2;
        input >> r1 >> r2;
        bool correct = r1 == Rational(5, 7) && r2 == Rational(5, 4);
        if (!correct)
        {
            cout << "Multiple values are read incorrectly: " << r1 << " " << r2 << endl;
            return 4;
        }
        input >> r1;
        input >> r2;
        correct = r1 == Rational(5, 7) && r2 == Rational(5, 4);
        if (!correct)
        {
            cout << "Read from empty stream shouldn't change arguments: " << r1 << " "
                 << r2 << endl;
            return 5;
        }
    }
    {
        istringstream input1("1*2"), input2("1/"), input3("/4");
        Rational r1, r2, r3;
        input1 >> r1;
        input2 >> r2;
        input3 >> r3;
        bool correct = r1 == Rational() && r2 == Rational() && r3 == Rational();
        if (!correct)
        {
            cout << "Reading of incorrectly formatted rationals shouldn't change arguments : " << r1 << " " << r2 << " " << r3 << endl;
            return 6;
        }
    }
    cout << "OK 4" << endl;
    return 0;
}