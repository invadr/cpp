#include <iostream>
#include "../../std_lib_facilities.h"

using namespace std;

int main()
{
    cout << "Pleaes enter an expression (we can handle + and -): ";
    int lval = 0;
    int rval;
    char op;
    int res;
    cin >> lval >> res >> rval;

    if(op == "+")
    {
        res = lval + rval;
    }
    else if(op == "-")
    {
        res = lval - rval;
    }

    cout << "Result: " << res << "\n";
    keep_window_open();

    return 0;
}
