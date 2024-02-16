/*Write a program to find out the area of the triangle where the triangle have 3 sights a,b,c
Input the value from the user and use farmola a = sqrt(s(s-a)(s-b)(s-c)) where s is a+b+c/2..
*/
#include <cmath>
#include <iostream>
using namespace std;

int main(){
    int s,a,b,c,area;
    cout <<"Enter the value of A:";//Let user input the value 20
    cin >>a;
    cout <<"Enter the value of B:";//Let user input the value 31
    cin>>b;
    cout <<"Enter the value of C:";//Let user input the value 2
    cin >>c;
     s = (a+b+c)/2;                     //s = (53)/2
                                        // s = 26.5

    area = sqrt(s*((s-a)*(s-b)*(s-c))); // area = sqrt(26.5(6.5)(-4.5)(24.5))
                                        // area = sqrt()



    cout <<"The area of the triangle is:"<<area<<"m";
    return 0;
}