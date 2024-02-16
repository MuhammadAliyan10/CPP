#include <iostream>
using namespace std;
int main(){

//------------------------------------------------User Input-------------------------------------------------------------------
    int a,b,c,d,e;
    cout<<"Enter first number:";
    cin>>a;
    cout<<"Enter second number:";
    cin>>b;
    cout<<"Enter third number:";
    cin>>c;
    cout<<"Enter fourth number:";
    cin>>d;
    cout<<"Enter fifth number:";
    cin>>e;
//------------------------------------------------Greater Then----------------------------------------------------------------
    if(a>b && a>c && a>d && a>e){
        cout << a <<" is greater than other....";
    }
    else if(b>a && b>c && b>d && b>e){
        cout << b <<" is greater than other...."<<endl;
    }
    else if(c>b && c>a && c>d && c>e){
        cout << c <<" is greater than other...."<<endl;
    }
    else if(d>b && d>c && d>a && d>e){
        cout << d <<" is greater than other...."<<endl;
    }
    else if(e>b && e>c && e>d && e>a){
        cout << e <<" is greater than other...."<<endl;
    }

//-----------------------------------------------------Less Then-----------------------------------------------------------


    if(a<b && a<c && a<d && a<e){
        cout << a <<" is less than other...."<<endl;
    }
    else if(b<a && b<c && b<d && b<e){
        cout << b <<" is less than other...."<<endl;
    }
    else if(c<b && c<a && c<d && c<e){
        cout << c <<" is less than other...."<<endl;
    }
    else if(d<b && d<c && d<a && d<e){
        cout << d <<" is less than other...."<<endl;
    }
    else if(e<b && e<c && e<d && e<a){
        cout << e <<" is less than other...."<<endl;
    }
    else{
    cout <<"Invalid output";
    }

    return 0;
}