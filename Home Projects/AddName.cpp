#include <iostream>
#include <fstream>
using namespace std;

int main(){

    ofstream aout("sample.txt");
    cout <<"Enter your Name:";
    string name;
    cin >>name;

    aout<< name + " is my name" ;
    aout.close();

    ifstream hin("sample.txt");
    string contant;
    hin >> contant;
    cout <<"The contant of this file is :"<<contant;
    hin.close();

    return 0;


}