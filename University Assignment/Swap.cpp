#include <iostream>
using namespace std;

void swap(int x, int y);
int main()
{

    int a = 2, b = 3;
    cout << "Value of a & b before swap";
    swap(a, b);
}
void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout << "X is " << x << " and y is " << y;
}