#include<iostream>
using namespace std;
int main()
{
    
    int i = 1;//To start the loop first we assign the value of i to 1..
    int sum = 0;//Cuz we want sum so first we assign the value of sum to 0 for corect answer...
    while (i < 5)//i=1 so the 1 is less than 5 and the loops start..
    {
        sum = sum + i;//First the value of i = 1 and the user input the value for example 2 so it add it and store the value into sum
        i++;//After increment the value of the i = 2 and it is les than 5 so the loop start again..
    }
    cout <<"The sum is "<<sum;
    return 0;
    
}