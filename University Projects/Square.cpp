#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout <<"Enter first number:";
    cin >>a;
    cout <<"Enter second number:";
    cin>>b;
    c = a*a;
    if(c == b){
        cout <<"The squre of a is equal to second number";
    }
    else{
        cout <<"The square of a is not equal to second number";
    }
    return 0;



}