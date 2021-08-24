#include <iostream>

using namespace std;

int factR(int n) //using recursion
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}

int fact(int x)
{
    int temp = 1;
    for (int i = x; i > 0; --i)
    {
        temp = temp * i;
    }
    return temp;
}

int main()
{
    int num;
    cout << "Enter the number :";
    cin >> num;

    cout << fact(num);

    return 0;
}