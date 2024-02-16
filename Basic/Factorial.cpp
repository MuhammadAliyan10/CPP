#include<iostream>
using namespace std;

int main()
{
    
int f,c,n;
f = 1;
c = 1;
cout <<"Enter a number: ";
cin >> n;
while(c <= n){ //Consider that use enter the value 8..
    f = f * c;// f = 1 * 8;
    c++;    /*The value of c beaceme 2...
            f = 8;
            f = 8 * 2;
            f = 16;
            f = 16 * 3;
            // /// // // 
            // /// // // 
            // /// // // 
            f =  5040 * 8
            f = 40320 */
}
cout <<"The factorial of "<<n<<" is "<<f;
return 0;
}