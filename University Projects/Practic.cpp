// #include <iostream>
// using namespace std;

// int main(){

// int no,a,b,c;
// cout<<"Enter four digit number:";
// cin >> no;
// a = no/1000;
// no = no%1000;
// b = no/100;
// no = no%100;
// c = no/10;
// no = no%10;
// cout <<no<<c<<b<<a<<endl;
// return 0;

// }

#include <iostream>
using namespace std;

int main(){

float co;
int re,div,dev;
cout<<"Enter a div number: ";
cin>>div;
cout<<"Enter a dev number: ";
cin>>dev;
co = div/dev;
re = div % dev;
cout<<"Coficent is: "<<co<<endl<<"Reminder is: "<<re<<endl;
return 0;


}