#include <iostream>
using namespace std;

int main()
{
    int a, b;
    for (a = 1; a <= 6; a++)
    {
        for (b = 1; b <= 6; b++)
            if (a == 1 || b == 1 || a == 6 || b == 6)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
                cout << endl;
            }
    }

    return 0;
}