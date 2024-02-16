#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char city[50];
    ofstream cityFile("e:\\cityFile.txt");
    if (!cityFile)
    {
        cout << "The file is not created";
        exit(1);
    }
    else
    {
        cout << "File created";
    }

    for (int i = 0; i <= 4; i++)
    {
        cout << "Enter city name: ";
        cin >> city;
        cityFile << i << ":" << city << endl;
    }

    cityFile.close();
}
