#include <iostream>
using namespace std;

int main()
{

    int a, b, space;
    for (a = 1; a <= 4; a++)
    {
        for (space = 0; space < 4 - a; ++space)
            cout << " ";

        for (b = 1; b < a - 1; ++b)

            cout << "*";

        for (b = 0; b < a - 1; ++b)
            cout << "*";
        cout << endl;
    }
    return 0;
}