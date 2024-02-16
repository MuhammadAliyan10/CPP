#include <iostream>
using namespace std;
int main(){
    int age,total_price,final_price,after_price;
    cout<<"Enter your price:";
    cin>>total_price;
    cout<<"Enter your age:";
    cin>>age;
    if(age >= 60){
        after_price = total_price/10;
        final_price = total_price - after_price;
        cout<<"After discount final price is "<<final_price;
    }
    else{
        cout<<"The total price is "<<total_price;
    }
    return 0;
}
