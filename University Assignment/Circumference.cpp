/*Write a program that inputs radius from the user.Calulate its area a =4pir*2 and its
 circumfrance = 4/3 pi r**3*/

 #include <iostream>
 using namespace std;
 int main(){
 int r,a,c;
 const float pi = 3.14;
 //Area of the sphere
 cout <<"Enter the radius:";//Let user input the value 10
 cin >>r;
 a = 2*pi*r*r;              // a = 2 * 3.14 * 10 * 10
                            // a = 628
 cout<<"The area of the sphere is:"<<a<<"m"<<endl;
 //Circumference of the sphere
  c = (4/3)*pi*r*r*r;  //c = (1.33)*3140
                        // c = 9859
 cout<<"The circumference of the sphere is:"<<c;
 return 0;
 }