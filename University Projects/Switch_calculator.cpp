#include <iostream>
using namespace std;
int main(){

        int a,b;
        char op;
        cout <<"Enter first number:";
        cin>>a;
        cout <<"Enter a opreator:";
        cin>>op;
        cout<<"Enter second number:";
        cin>>b;

        switch(op){
        case '+':
            cout<<a + b<<endl;
            break;
        case '-':
            cout<<a - b<<endl;
            break;
        case '*':
            cout<<a * b<<endl;
            break;
        case '/':
            cout << a/ b;
            break;
        default:
             cout<<"Enter a valid opreator";
        }
        return 0;
    
}