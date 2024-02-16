#include <iostream>
using namespace std;
int main(){
    int radius,area,circumference,user_value,distance,velocity,time;
    float pi;
    pi = 3.14;
    cout << "Enter your number: ";
    cin>> user_value;

    if(user_value == 1){
            cout<<"Enter velocity: ";
            cin>>velocity;
            cout<<"Enter time: ";
            cin>>time;
        distance = velocity * time;
        cout<<"The distance is "<<distance<<"m";
    }
    else if(user_value == 2){
            cout<<"Enter radius: ";
            cin>>radius;
        area = 2 * pi * radius;
        cout <<"The area is "<<area<<"cm";
    }
    else if(user_value == 3){
            cout<<"Enter radius: ";
            cin>>radius;
        circumference = 2 * pi *radius * radius;
        cout<<"The circumfrernce is "<<circumference;
    }
    else{
        cout<<"Invalid input";
    }
    

}