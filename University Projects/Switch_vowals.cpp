#include <iostream>
using namespace std;
int main(){
    char vowel;
    cout <<"Enter a character:";
    cin >>vowel;
    switch (vowel){
        case 'a': case 'A':
             cout<<"The number is vowal";
             break;
        case 'e': case 'E':
             cout<<"The number is vowal";
             break;
        case 'i': case 'I':
              cout<<"The number is vowal";
              break;
        case 'o': case 'O':
             cout<<"The number is vowal";
             break;
        case 'u': case 'U':
             cout<<"The number is vowal";
             break;
        default:
        cout<<"Inavlid input";
    }
    return 0;
}