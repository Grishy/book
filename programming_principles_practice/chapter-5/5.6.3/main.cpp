// Use Ctrl+D

#include "std_lib_facilities.h"

int main()
{
    try
    {
        vector<int> v;
        for (int x; cin >> x;)
        {
            v.push_back(x);
        }
        for (int i = 0; i <= v.size(); ++i)
        {
            cout << "v[" << i << "] == " << v[i] << '\n';
        }
    }
    catch (out_of_range)
    {
        cerr << "Ошибка диапазона!\n";
        return 1;
    }
    catch (...)
    {
        cerr << "Исключение: что-то пошло не так\n";
        return 1;
    }
}