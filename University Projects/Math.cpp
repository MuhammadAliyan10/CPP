#include <iostream>
using namespace std;

int main(){

    int a,b,c;
    a=40,b=60,c=60;
    cout<<"Before Swapping:"<<endl<<"a ="<<a<<endl<<"b ="<<b<<endl<<"c = "<<c<<endl;
    a = a+b;
    c = a-b;
    a = a-c;
    b = a+b-c;
    cout<<"After wapping: "<<endl<<"a ="<<a<<endl<<"b = "<<b<<endl<<"c = "<<c<<endl;
    return 0;
}