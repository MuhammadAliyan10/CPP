#include <iostream>
using namespace std;

int main() {
    int number, sum = 0;
    
    cout << "Enter a three-digit number: ";
    cin >> number;
    
    // Ensure the number is three digits
    while (number < 100 || number > 999) {
        cout << "Invalid input. Enter a three-digit number: ";
        cin >> number;
    }
    
    // Calculate the sum of the digits
    while (number > 0) {
        sum += number % 10;  // Add the last digit to the sum
        number /= 10;       // Remove the last digit from the number
    }
    
    cout << "Sum of the digits: " << sum <<endl;
    
    return 0;
}
