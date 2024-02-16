#include <iostream>
using namespace std;
int main(){

    int income,charges, total_salery, final_salery,final_charges;
    cout<<"Write your income: ";
    cin >> income;
    cout <<"Write your charges:";
    cin >>charges;
    if(income > 100000){
        final_salery = charges * 10 / 100;
        final_charges = charges + final_salery;
        total_salery = income - final_charges;
        cout <<"The income after charges is "<<total_salery<<endl;
    }
    if(income > 50000){
        final_salery = charges * 5 / 100;
        final_charges = charges + final_salery;
        total_salery = income - final_charges;
        cout <<"The income after charges is "<<total_salery;
    }
    return 0;
}