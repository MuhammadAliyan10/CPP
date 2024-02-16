#include <iostream>
using namespace std;
int main(){

    int a,b,c;
    cout<<"Enter first number:";
    cin>>a;
    cout<<"Enter second number:";
    cin>>b;
    cout<<"Enter third number:";
    cin>>c;
    if (a > b && a > c){
        cout<<"The first number is greater then other";
        }
    if (b > a && b > c){
        cout<<"The second number is greater then other";
    }
    if (c > a && c > b){
        cout<<"The third number is greater then other";
        }


    return 0;

}