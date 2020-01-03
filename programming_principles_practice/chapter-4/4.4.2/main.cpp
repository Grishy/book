// Вывод таблицы симоволов

#include "std_lib_facilities.h"

int main()
{
    char start = '0';
    char end = 'z';
    while (start <= end)
    {
        cout << start << '\t' << int{start} << "\n";
        ++start;
    }
}