#include <iostream> //<--- Стандартна бібліотека

using namespace std; //<--- Директива

float multiply(float wide, float length, float top)
{ //<--- функція для обчислення повної площи будинку
    return wide * length * top;
}

float add_living(float living, float non_living)
{ //<--- функція яка віднімає площу від нежилої площі
    return living - non_living;
}

float total_price(float price, float total)
{ //<--- функція для обчислення ціни за квадратний метр будинку
    float x = float(int((price / total) * 10 + 0.5)) / 10;
    return x;
}

int main() //<--- Головна функція
{
    float house_wide = 30.0, house_length = 40.0, number_top = 2.5, square_non_living = 825.0, price = 150000.0, total_square_home = 0, living_place = 0, total = 0;
    //^---Змінні
    total_square_home = multiply(house_wide, house_length, number_top); //
                                                                        //
    living_place = add_living(total_square_home, square_non_living);    //   в три змінні присвоюєм кожну функцію з підставленими вище змінними
                                                                        //
    total = total_price(price, living_place);                           //

    cout << "Площа будинку: " << total_square_home << endl;        //
                                                                   //
    cout << "житлова площа: " << living_place << endl;             //    виводимо готові дані в консоль
                                                                   //
    cout << "Ціна за квадратний метр: " << total << "грн" << endl; //
    return 0;
}
