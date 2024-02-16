// Sum of two value,by changing the opreator you can sum,miltiply,subtract or divsion...

#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout <<"Enter the value of A:";
    cin >> a;
     cout <<"Enter the value of B:";
    cin >> b;
    c = a + b;
    cout <<"The sum of a and b is:"<<c<<"m";

    return 0;
}


//Using of swich statment

#include <iostream>
using namespace std;

int main(){
  int days;
  cout << "Enter a number:";
  cin >> days;
  switch(days)
  {
  case 1:
  cout << "Monday";
     break;
       case 2:
  cout << "Tuesday";
     break;
       case 3:
  cout << "Wednesday";
     break;
       case 4:
  cout << "Thursday";
     break;
       case 5:
  cout << "Friday";
     break;
       case 6:
  cout << "Saturday";
     break;
       case 7:
  cout << "Sunday";
     break;
  
  default:
  cout << "Please enter a valid number";
    break;
  }
  return 0;

}
//Condition of if, if else or ifelse if..

#include <iostream>
using namespace std;

int main(){
    int a , b;
    cout << "Enter the value of A:";
    cin >> a;
    cout << "Enter the value of B:";
    cin >> b;

  
  if (a > b)
  {
    cout << "A is greater than B";
  }
  else
  { 
    cout << "B is greater than A";
  }
  
}


// Short hand id else

#include <iostream>
using namespace std;

int main(){

    int time;
    cout << "Enter the time: ";
    cin >> time;
     string result = (time < 12) ? "Good Morning" : "Good Evening";
     cout << result;
    
}


#include <iostream>
using namespace std;

int main(){

   int i;
   cout << "Enter a number:";
   cin >> i;
   while (i < 100)
   {
    cout << i << "\n";
    i++;
   }
   return 0;
   
  

}



