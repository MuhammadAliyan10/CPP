#include<iostream>
using namespace std;

int main()
{
    
    int a,x,r,sum = 0;//First we take some variable to store data,We use x to take value form the user and sum to show the output
    cout<<"Enter a number: ";
    cin>>x;
    a = x;//When the user enter some value it store int x and tham a
    while (x != 0) //For example user enter 8 and it is greater than 0 so the loop start
    {
        r = x % 10;//The user enter 8 and it become r = 8 % 10;
                    // r = 0.8
        if (r == 0)
        {
            sum = sum + x;
        }
        else
        {
            sum = sum + r;
            x = x / 10;
        }
        
        
    }
        cout <<"The sum of the digit of "<<a<< " is "<<sum;
    
}