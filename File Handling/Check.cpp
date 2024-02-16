#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char city[50];
    ifstream cityFile("e:\\cityFile.txt");
    while (!cityFile.eof())
    {
        cityFile >> city;
        cout << city;
    }

    cityFile.close();
}
