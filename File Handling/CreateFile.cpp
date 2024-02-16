#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int a;
    float b;
    string myText;
    ifstream file("e:\\index.txt");
    if (!file)
    {
        cout << "File not created";
        exit(1);
    }
    else
    {
        cout << "File Updated";
    }

    file >> a;
    file >> b;
    cout << "The value of a is " << a << " and the value of b is " << b;
    file.close();
}