#include <iostream>
using namespace std;

float avgFunction(int a , int b){
   float avg = (a + b)/2;
   return avg;
}

int main(){
    float a;
    a = avgFunction(8, 8);
    printf("The avarege of the number is %.3f", a);
    return 0;


}