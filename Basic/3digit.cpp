#include<iostream>
using namespace std;

int main()
{
    int num,a,b,sum;
    cout << "Enter 3 digit number ";
    cin >> num;//Let user enter 121
    a = num/100; // a = 121 / 100 = 1
    num= num%100;
    b = num/10;// b =21 / 10 = 2
    num = num%10;//num = 1;
    sum = num + b + a; // sum = 1 + 2 + 1 = 4
    cout <<"The sum of the number is " << sum;
    return 0;
}