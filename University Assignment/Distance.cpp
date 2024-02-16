/*Write a program which input miles form the user and convert miles into kilometer*/
#include <iostream>
using namespace std;
int main(){
int m;
float km;
cout <<"Enter the miles:";
cin >>m;
km = m * 1.609;
cout <<"The distance is "<<km<<"km";
return 0;

}