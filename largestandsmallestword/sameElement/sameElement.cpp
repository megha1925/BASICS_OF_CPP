// Write a program to check if elements of an array are same or not it read from front or back. E.g.-
// 2     3   15    15    3    2

#include <iostream>

using namespace std;

void palindrome(int *arr, int x)
{
    bool flag = false;
    int i, j;

    for (i = 0; i < x; i++)
    {
        if (arr[i] != arr[x - i - 1])
        {
            flag = true;
            break;
        }
    }

    //   for(  i = 0 ,  j = x-1 ; i < x/2 , j>=x/2 ; i++ , j--)
    //   {
    //     if(arr[i] != arr[j])
    //     {
    //         flag = true;
    //         break;

    //     }
    //   }

    if (flag)
    {
        cout << "NO ARRAY IS NOT PALLINDROME";
    }
    else
    {
        cout << "YES ARRAY IS PALINDROME";
    }
}

int main()
{
    int n;
    cout << "Enter the size of the array : " << endl;
    cin >> n;
    int *arr = new int(n);
    cout << "Enter the elements of the array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    palindrome(arr, n);
    return 0;
}