#include <iostream>
#include "funcs.h"
#include "TrianglePrinter.h"

using namespace std;

int main()
{
    TrianglePrinter t;

    for(unsigned int i = 0; i < 10; i++)
    {
        cout << factorial(i) << endl;
    }
    unsigned long x,y;
    x = 4;
    y = 3;
    cout << combination(x,y) << endl;
    return 0;
}
