#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    char opreator;
    cout << "Enter first number: ";
    cin >>a;
    cout << "Enter second number: ";
    cin >>b;
    cout << "Enter third number: ";
    cin >>c;
    cout <<"Enter a opreator: ";
    cin >> opreator;
    switch (opreator)
    {
    case '+': //If the user enter the + it will add the number..
     cout << "The sum of the numbers is "<< a + b + c ;
        break;
    case '-':
     cout << "The substration of the numbers is "<< a - b - c;
        break;
    case '*':
     cout << "The product of the numbers is "<< a * b * c;
        break;
    case '/':
     cout << "The division of the numbers is "<< a / b / c;
        break;
    
    default:
    cout << "Santax Error";
        break;
    }

}