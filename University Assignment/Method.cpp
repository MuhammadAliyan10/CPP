#include <iostream>

// Function to add two numbers
int add(int a, int b)
{
    return a + b;
}

// Function to multiply two numbers
int multiply(int a, int b)
{
    return a * b;
}

int main()
{
    int num1, num2;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Call the add function and print the result
    int sum = add(num1, num2);
    std::cout << "Sum: " << sum << std::endl;

    // Call the multiply function and print the result
    int product = multiply(num1, num2);
    std::cout << "Product: " << product << std::endl;

    return 0;
}
