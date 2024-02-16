/*Make a program that take 4 value from the user and output sum,avarage and the product of the number */
#include <iostream>
using namespace std;
int main(){
 int a,b,c,d,sum,product,avg;
 cout<<"Enter first value:";//a = 10
 cin >>a;
 cout<<"Enter second value:";//b = 10
 cin >>b;
 cout<<"Enter third value:"; //c = 14
 cin >>c;
 cout<<"Enter forth value:"; //d == 6
 cin >>d;
 sum = a + b + c + d; //sum = 10 + 10 + 14 + 6
 product = a * b * c * d; //product = 10 * 10 * 14 * 6
 avg =  sum / 2; //avg = (10 + 10 + 14 + 6)/2
 cout<<"The sum of the value is: "<<sum<<endl;
 cout<<"The product of the value is: "<<product<<endl;
 cout<<"The avarage of the value is: "<<avg;
 return 0;


}