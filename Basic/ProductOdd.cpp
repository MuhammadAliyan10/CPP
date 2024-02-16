#include <iostream>
using namespace std;
int main(){
    int num;
    int count = 1;
    while(num >= -1){   //Enter 0 to close the program...
        cout << "Enter the positive numbers: ";
        cin >> num;
        if (num%2 != 0)
        {
            count = count * num;
        }
        
    }
    cout <<"The product of all positive odd number is "<<count;

}