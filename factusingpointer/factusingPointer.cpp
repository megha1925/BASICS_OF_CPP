//Write a program to find the factorial of a number using pointers.
#include <iostream>

using namespace std;

int fact(int *x)
{
    int a = 1;
    while (*x > 1)
    {
        a = a * *x;  //5 5*4 5*4*3
        *x = *x - 1; //4 3 2
    }

    return a;
}

int main()
{
    int n;
    cout << "Enter the number : " << endl;
    cin >> n;
    cout << fact(&n);
    return 0;
}