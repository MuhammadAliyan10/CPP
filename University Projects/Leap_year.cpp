#include <iostream>
using namespace std;
int main(){
    int year;
    cout <<"Enter the year:";
    cin >> year;
    if (year%4 == 0){
        cout<<"This is the leap year";
    }
    else{
        cout<<"This is not leap year";
    }
    return 0;

}