#include<iostream>
using namespace std;
int main()
{
    float c,r;
    c = 2.0;
    r = 1.0;
    while (c <= 100) //C is less then 100
    {
        r = r + 1.0/c; /*The value of r =1.0 + 1.0/2.0
                            r = 1.0 */
        c += 2;
    }
    cout <<"The table of the following table is "<<r;
}