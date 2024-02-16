#include<iostream>
using namespace std;

int main()
{
    int num,odd_sum,even_sum;
    odd_sum = 0;
    even_sum = 0;
    while (num > 0)
    {
        cout <<"Enter a number ";
        cin >> num;
        if (num%2 == 0)
        {
            even_sum = even_sum + num;
        }
        else
        {
            odd_sum = odd_sum  + num;
        }
        
        
    }
    cout <<"The sum of even number is "<<even_sum<<endl;
    cout << "The sum of odd number is "<<odd_sum;
    return 0;

}