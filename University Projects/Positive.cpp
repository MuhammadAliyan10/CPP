#include <iostream>
using namespace std;
int main(){
    int num;
    int count = 0;
    while (num > 0)
    {
        cout <<"Enter positive numbers: ";
        cin >> num;
        count = count + num;
    }
    cout << "The sum of all positive number is " << count;
    
}