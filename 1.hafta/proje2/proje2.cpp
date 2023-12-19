#include <iostream>

using namespace std;

int main()
{
    char name[20];
    char nickName[20];
    long long int studentNumber;
    float GPA;
    cout << "Enter Your Name: ";
    cin >> name;
    cout << "Enter Your Nickname: ";
    cin >> nickName;
    cout << "Enter Your Student Number: ";
    cin >> studentNumber;
    cout << "Enter Your GPA: ";
    cin >> GPA;

    cout << "\nFull Name: " << name << " " << nickName << endl
         << "Student Number: " << studentNumber << endl
         << "GPA: " << GPA;

    return 0;
}