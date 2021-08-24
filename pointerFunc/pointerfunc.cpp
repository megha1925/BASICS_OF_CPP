//Write a function which will take pointer and display the number on screen.
//Take number from user and print it on screen using that function.
#include <iostream>

using namespace std;

void pointerfunc(int *ptr1)
{
    cout << *ptr1;
}

int main()
{
    int *ptr, a;
    cout << "Enter a number " << endl;
    cin >> a;
    ptr = &a;

    pointerfunc(ptr);
    return 0;
}