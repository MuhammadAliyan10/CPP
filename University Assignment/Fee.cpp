/*Write a program that input total nummber of student in the class and fee per head and display 
how much fee colected from this class*/
#include <iostream>
using namespace std;
int main(){

int no_student,fee,total_fee;
cout<<"Enter total number of stundent in the class:";
cin >>no_student;
cout<<"Enter the fee of on student: ";
cin>> fee;
total_fee = no_student * fee;
cout <<"Total fee colected form the class is "<<total_fee;
return 0;


}