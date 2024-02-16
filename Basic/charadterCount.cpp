#include<iostream>
using namespace std;

int main()
{
    string word;
    int count = 0;
    int index = 0;
    cout <<"Enter a word to count its character: ";
    cin >> word;
    while (word[index] != '\0')/*Let user enter a word usama and than the condition check...
                                    usmam[0] != 0 so the condition is true and the 1 is add in index
                                    and count both and than after that the usama[1] and condition meets
                                    and loop start again until the value of the word beacame 0 */
    {
        index++;
        count++;
    }

    cout <<"Total character in this word is "<< count;
}