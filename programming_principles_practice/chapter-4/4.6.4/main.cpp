// Замена нежелательных строк на BLEEP

#include "std_lib_facilities.h"

int main()
{
    vector<string> dislike;
    dislike.push_back("test1");
    dislike.push_back("test2");

    for (string temp; cin >> temp;)
    {
        for (auto &&i : dislike)
        {
            if (i == temp)
            {
                temp = "BLEEP";
                break;
            }
        }
        cout << "out: " << temp << "\n";
    }
}