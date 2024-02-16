#include <iostream>
using namespace std;
struct student
{
    int rno, marks;
    float avg;
    char grade;
};

int main()
{
    student s;
    cout << "Enter Roll number : ";
    cin >> s.rno;

    cout << "Enter marks : ";
    cin >> s.marks;

    cout << "Enter avarage : ";
    cin >> s.avg;

    cout << "Enter grade : ";
    cin >> s.grade;

        cout << "Your deatails is";
    cout << "The data is" << s.rno << endl;
    cout << "The data is" << s.marks << endl;
    cout << "The data is" << s.avg << endl;
    cout << "The data is" << s.grade << endl;
}