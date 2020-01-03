// Программа для перевода гривен, рублей и юаней в доллары.

#include "std_lib_facilities.h"

int main()
{
    constexpr double uah = 23.67;
    constexpr double rub = 62.02;
    constexpr double cny = 6.97;
    double val = 0.0;
    char unit = ' ';

    cout << "Ввердите валюту и единицу измерения (u, r, c): \n";
    cin >> val >> unit;
    switch (unit)
    {
    case 'u':
        cout << val * uah << "$\n";
        break;
    case 'r':
        cout << val * rub << "$\n";
        break;
    case 'c':
        cout << val * cny << "$\n";
        break;
    default:
        cout << "Неизвестная валюта '" << unit << "'\n";
        break;
    }
}