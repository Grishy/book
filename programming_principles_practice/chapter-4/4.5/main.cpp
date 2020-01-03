// Вывод таблицы симоволов

#include "std_lib_facilities.h"

int main()
{
    cout << "\t == Инструкция while == \n";
    char start = 'a';
    char end = 'z';
    while (start <= end)
    {
        cout << start << '\t' << int{start} << "\n";
        ++start;
    }

    cout << "\t == Инструкция for == \n";
    for (size_t i = 0; i < 10; i++)
    {
        cout << i << '\t' << i * i << "\n";
    }
}