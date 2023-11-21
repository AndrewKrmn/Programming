#include <iostream>
#include <iomanip>
using namespace std;
struct car
{
    string name_car, colour_car;
    int create_year;
    float price_car;
};
//^--- структура car
int main()
{
    car Ford, Porche, Audi, Mercedes, Toyota;
    string name_cars[5] = {"Форд", "Порше", "Ауді", "Мерседес", "Тойота"};
    string colour_cars[5] = {"Синій", "Червоний", "Чорний", "Білий", "Червоний"};
    int create_years[5] = {1999, 2001, 2002, 2010, 2001};
    float car_price[5] = {21999.99, 134000, 58000.99, 25899.99, 10589.89};
    car cars[5] = {Ford, Porche, Audi, Mercedes, Toyota};
    for (int i = 0; i < 5; ++i)
    {
        cars[i].name_car = name_cars[i];
        cars[i].colour_car = colour_cars[i];
        cars[i].create_year = create_years[i];
        cars[i].price_car = car_price[i];
    }
    //^--- заповнюємо масив даними
    cout << "---------------------------------------------------" << endl;
    for (car &i : cars)
    {
        cout << setprecision(8) << left << i.name_car << "  " << i.create_year << " року  " << i.price_car << " $  " << i.colour_car << " колір  " << endl;
        cout << "---------------------------------------------------" << endl;
    }
    //^--- виводим масив
    for (size_t i = 0; i < 5; i++)
    {
        if (cars[i].colour_car == "Червоний" && cars[i].create_year == 2001)
        {
            cout << cars[i].name_car << endl;
        }
    }
    //^--- пошук авто
}