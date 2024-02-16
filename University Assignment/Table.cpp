#include <iostream>
using namespace std;
void table(int num);

int main()
{
    int num;
    cin >> num;
    table(num);
}

void table(int n)
{
    for (int i = 1; i <= 10; i++)
    {
        cout << n << " * " << i << " = " << n * i << endl;
    }
}