/*Write a program that input user age in year and display age in months and days*/
#include <iostream>
using namespace std;
int main(){
    int age,in_months,in_days;
    cout <<"Enter your age: ";
    cin >>age;
    in_days = age * 365;
    in_months = age * 12;
    cout<<"You live "<<in_days<<" days and "<<in_months<<" months.";
    return 0;
}