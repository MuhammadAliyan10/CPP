#include <iostream>

#include <cstdlib> //This library is use for to use the random function

using namespace std;

int main()

{
    int Random = rand() % 100 + 1; // This function will genrate number between 1 to 100.

    int guess = 1; // Lets take a variable name guess to show haw many times user try to guess this..

    int userGuess; // Lets take a varibale to take the number input from user...

    cout << "Enter a number between 1 to 100 : ";

    cin >> userGuess;

    while (true) // This is infinity loops breaks when the condition became true....
    {
        if (userGuess == Random) // First if statment is use to cheack that the value giver by user and the random number is equal
        {
            cout << "You won. You guess the number in " << guess << " times."; // If this is equal so it show that output..

            break; // If first condition beacme true so the program will end..
        }
        else // This will run when the if condition false
        {

            if (guess < 3)

            {
                if (userGuess < Random) // In first condition if the value given by user is small then random value

                {
                    cout << "Too small number.Guess a greater one : ";

                    cin >> userGuess; // it input again value and

                    guess += 1; // Increment the value of guess by one
                }
                else if (userGuess > Random) // In second condition if the value given by user is larger then random value
                {
                    cout << "Too large number.Guess a smaller one : ";

                    cin >> userGuess; // it input again the value

                    guess += 1; // Increment the value of guess by one
                }
            }
            else
            {

                cout << "Game Over.Press any key to continue";
                break;
        
            }
        }
    }

    return 0; // At last it will return the value
}