#include <iostream>
using namespace std;
int main(){

    int age,total_bonus,salery,final_salery;
    cout<<"Enter your salery:";
    cin>>salery;
    cout<<"Enter your age:";
    cin>>age;
    if(age >= 60){
        total_bonus = salery*10/100;
        final_salery = total_bonus + salery;
        cout<<"After discount total salery is "<<final_salery;
    }
    if(age < 60){
        cout<<"The total salery is "<<salery;
    }
    return 0;
}
