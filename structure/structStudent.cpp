// Write a program to store and print the roll no., name , age and marks of a student using structures.
#include <iostream>
#include <string>

using namespace std;

struct Student
{
    string name;
    int roll;
    int age;
    float marks[3];
};

int main()
{
    int n;
    cout << "Enter the number of students : " << endl;
    cin >> n;
    Student st[n];
    cout << "Information about the students : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "ENTER THE NAME OF THE STUDENT : " << endl;
        cin >> st[i].name;
        cout << "ENTER THE ROLL NO OF THE STUDENT : " << endl;
        cin >> st[i].roll;
        cout << "ENTER THE AGE OF THE STUDENTS : " << endl;
        cin >> st[i].age;
        cout << "ENTER THE MARKS OF THE MARKS OF THE STUDENTS : " << endl;
        for (int j = 0; j < 3; j++)
        {
            cin >> st[i].marks[j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << "INFORMATION IS DISPLAYED BELOW" << endl;
        cout << "NAME OF THE STUDENT : " << st[i].name << "\n";
        cout << "ROLL N0 OF THE STUDENT : " << st[i].roll << "\n";
        cout << "AGE OF THE STUDENT : " << st[i].age << "\n";
        for (int j = 0; j < 3; j++)
        {
            cout << "MARKS OF THE STUDENT : " << st[i].marks[j] << "\n";
        }
    }
    return 0;
}