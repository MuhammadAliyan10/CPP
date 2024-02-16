/*Write a program thats input a number from the user and display cube and square*/

#include <iostream>
using namespace std;
int main(){
int num,sqr,cube;
cout <<"Enter a number: ";
cin >>num;
sqr = num*num;
cube = num*num*num;
cout <<"The square of the number is:"<<sqr<<endl<<"The cube of the number is:"<<cube;
return 0;

}