// Считывает имя и возраст (дробное) и выврдит возраст в месяцах

#include "std_lib_facilities.h"

int main() {
    cout << "Введите имя и возраст:\n";
    string first_name;
    double age;
    cin >> first_name;
    cin >> age;
    cout << "Привет, " << first_name << " (возраст " << age * 12 << " месяцев)!\n";
}