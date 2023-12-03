#include <iostream>
using namespace std;
const float EMPTY_WEIGHT = 9887.0, EMPTY_MOMENT = 3'185'853.0, PERSON_WT = 170.0, LBS_PER_GAL = 6.7;
//^--- глобальні константні змінні для зручності в обрахунках
void DialogWindow()
{
    cout << " _______________________________________________" << endl;
    cout << "| Введіть дані в такому порядку :               |\n| 1-Чисельність команди                         |\n| 2-Число пасажирів                             |\n| 3-Вага вмісту туалету                         |\n| 4-Вага багажу                                 |\n| 5-Кількість палива                            |\n";
    cout << " ===============================================" << endl;
}
//^--- функція з діалоговим вікном
int GetData(unsigned int &team_size, unsigned int &number_of_passangers, float &weight_toilet_content, float &weight_of_luggage, float &fuel)
{
    while (true)
    {
        cout << "Екіпаж : " << endl;
        cin >> team_size;
        if (team_size == 0 || team_size > 2)
        {
            cout << "Чисельність команди 1 або 2 особи! Повторіть спробу" << endl;
        }
        else
        {
            break;
        }
    }
    //^--- ввід й перевірка чисельності команди
    while (true)
    {
        cout << "Пасажири : " << endl;
        cin >> number_of_passangers;
        if (number_of_passangers > 8)
        {
            cout << "Чисельність пасажирів не більше 8! Повторіть спробу" << endl;
        }
        else
        {
            break;
        }
    }
    //^--- ввід й перевірка чисельності пасажирів
    while (true)
    {
        cout << "Вага вмісту туалету : " << endl;
        cin >> weight_toilet_content;
        if (weight_toilet_content > 160)
        {
            cout << "Максимальна вага туалету 160 фунтів! Повторіть спробу" << endl;
        }
        else
        {
            break;
        }
    }
    //^--- ввід й перевірка максимальної ваги туалета
    while (true)
    {
        cout << "Вантаж : " << endl;
        cin >> weight_of_luggage;
        if (weight_of_luggage > 525)
        {
            cout << "Максимальна вага багажу 525 фунтів! Повторіть спробу" << endl;
        }
        else
        {
            break;
        }
    }
    //^--- ввід й перевірка максимальної ваги багажу
    while (true)
    {
        cout << "Паливо : " << endl;
        cin >> fuel;
        if (fuel > 565 && fuel != 0)
        {
            cout << "Максимальна вага палива 565 фунтів на галон! Повторіть спробу" << endl;
        }
        else
        {
            break;
        }
    }
    //^--- ввід й перевірка максимальної ваги палива фунтів на галон
    return 0;
}
//^--- функція для вхідних даних з перевіркою
float TotalWeightPlane(unsigned int &team_size, unsigned int &number_of_passangers, float weight_toilet_content, float weight_of_luggage, float fuel)
{
    float total_weight_plane = EMPTY_WEIGHT + (team_size + number_of_passangers) * PERSON_WT + (weight_of_luggage + weight_toilet_content) + (fuel * LBS_PER_GAL);
    return total_weight_plane;
}
//^--- функція яка обчислює загальну вагу літака
float CrewMoment(unsigned int &team_size)
{
    float crew;
    if (team_size == 1)
    {
        crew = PERSON_WT * 143;
    }
    else
    {
        crew = (PERSON_WT + PERSON_WT) * 143;
    }

    return crew;
}
//^--- функція яка обчислює центр ваги екіпажу
int PassangersMoment(unsigned int &number_of_passangers)
{
    int passangers;
    switch (number_of_passangers)
    {
    case 1:
        passangers = PERSON_WT * 265;
        break;
    case 2:
        passangers = (number_of_passangers * PERSON_WT) * 530;
        break;
    case 3:
        passangers = (number_of_passangers * PERSON_WT) * 749;
        break;
    case 4:
        passangers = (number_of_passangers * PERSON_WT) * 968;
        break;
    case 5:
        passangers = (number_of_passangers * PERSON_WT) * 1263;
        break;
    case 6:
        passangers = (number_of_passangers * PERSON_WT) * 1558;
        break;
    case 7:
        passangers = (number_of_passangers * PERSON_WT) * 1899;
        break;
    case 8:
        passangers = (number_of_passangers * PERSON_WT) * 2240;
        break;

    default:
        break;
    }
    return passangers;
}
//^--- функція яка обчислює центр ваги пасажирів
float CargoMoment(float &weight_toilet_content, float &weight_of_luggage)
{
    float closet, baggage, total;
    closet = weight_toilet_content * 182;
    baggage = weight_of_luggage * 386;
    return total = closet + baggage;
}
//^--- функція яка обчислює центр ваги туалету й багажу
float FuelMoment(float &fuel)
{
    float total_fuel;
    if (fuel <= 59)
    {
        total_fuel = 314.6 * fuel;
    }
    else if (fuel >= 60 && fuel <= 360)
    {
        total_fuel = 305.8 + (-0.01233 * (fuel - 60));
    }
    else if (fuel >= 361 && fuel <= 520)
    {
        total_fuel = 303.0 + (-0.12500 * (fuel - 361));
    }
    else if (fuel >= 521 && fuel <= 565)
    {
        total_fuel = 323.0 + (-0.04444 * (fuel - 521));
    }
    return total_fuel;
}
//^--- функція яка обчислює центр ваги палива
float center_of_Gravity(unsigned int &team_size, unsigned int &number_of_passangers, float &weight_toilet_content, float &weight_of_luggage, float &fuel)
{
    float center_of_Gravity = (CrewMoment(team_size) + PassangersMoment(number_of_passangers) + CargoMoment(weight_toilet_content, weight_of_luggage) + FuelMoment(fuel) + EMPTY_MOMENT) / TotalWeightPlane(team_size, number_of_passangers, weight_toilet_content, weight_of_luggage, fuel);
    return center_of_Gravity;
}
//^--- функція яка обчислює центр ваги всього літака з урахуванням вище створених функцій
void PrintWarning(float &total_weight_plane)
{
    float check_weight = 16057.5 - total_weight_plane;
    if (check_weight <= 100)
    {
        cout << "\n========================================================================\n\t\t\t!!!WARNING!!!\n Літак завантажений до критичної відмітки! Радимо не навантажувати літак\n========================================================================" << endl;
    }
}
//^--- функція яка перевіряє чи не є критична вага літака,в разі true функція виведе повідомлення про це
int main()
{
    unsigned int team_size, number_of_passangers;
    float weight_toilet_content, weight_of_luggage, fuel;
    //^--- ініціалізація змінних
    DialogWindow();
    //^--- Вивід діалогового вікна
    GetData(team_size, number_of_passangers, weight_toilet_content, weight_of_luggage, fuel);
    //^--- Отримуємо дані
    cout << "Вага літака за вказаними вище данними : " << TotalWeightPlane(team_size, number_of_passangers, weight_toilet_content, weight_of_luggage, fuel) << endl;
    cout << "Центр ваги літака : " << center_of_Gravity(team_size, number_of_passangers, weight_toilet_content, weight_of_luggage, fuel) << endl;
    //^--- Виводимо результати обрахунків
    float total_Weight_PLANE = TotalWeightPlane(team_size, number_of_passangers, weight_toilet_content, weight_of_luggage, fuel);
    //^--- присвоюємо функцію в змінну
    PrintWarning(total_Weight_PLANE);
    //^--- вивід попередження в разі true
}