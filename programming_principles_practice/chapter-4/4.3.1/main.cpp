// constexpr

#include "std_lib_facilities.h"

int main()
{
    int r = 2;
    constexpr double pi = 3.14;
    pi = 7;
    int v = 2 * pi / r;
}