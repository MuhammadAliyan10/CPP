#include<iostream>
using namespace std;
int main(){
     int final_value; //First we take a variable to store the value
     int num; //We take num to take input form the user
     int i = 1;//To start the loop from 1 to 10 we assign the value of i to 10
     cout << "Enter a number to find its table: ";
     cin >> num;
     while(i <= 10){ //When the program runs its cheack the condition.1 is less than 10 so loop start..
        final_value = i * num;//The value of i is 1 and the num(For example 2) is divided and the answer store in the final_value
        i++;//After increment the value of i is 2 and the loop start again...
     cout << num <<" * " << i << " = "<< final_value << endl;//The answer is definied in num
     }
     return 0;
    
}