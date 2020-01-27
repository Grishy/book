// calc
// Лексер

#include "std_lib_facilities.h"

class Token
{
public:
    char kind;
    double value;
};

int main()
{
    Token t;
    t.kind = '+';
    Token t2;
    t2.kind = '8';
    t2.value = 3.14;

    Token tt = t;
    if (tt.kind != t.kind)
        error("невозможно!");
    t = t2;
    cout << t.value;

    Token t21{'+'};
    Token t22{'8', 11.5};

    return 0;
}