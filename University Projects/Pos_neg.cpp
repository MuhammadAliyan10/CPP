#include <iostream>
using namespace std;
int main(){
    int num;
    cout <<"Enter a number: ";
    cin >>num;
    if(num > 0){
        cout <<"The number is positive";
    }
    if(num < 0){
        cout <<"The number is negtive";
    }
    if(num == 0){
        cout <<"The number is equal";
    }
    else{
        cout <<"Invalid input"
    }
    return 0;

}