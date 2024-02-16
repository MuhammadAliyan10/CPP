/*A car can travel 5.3 miles in one liter.Write a program that input petrol in liter from user
and tell how much distance the car can cover in the petrol*/

#include <iostream>
using namespace std;
int main(){

float liter,miles;
cout <<"Enter the amount of petrol in liter:";
cin >>liter;
miles = liter * 5.3;
cout <<"The car can cover the distance of "<<miles<<" miles in "<<liter<<" liter.";
return 0;

}