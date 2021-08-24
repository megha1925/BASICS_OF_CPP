// program to circular right shift

#include <iostream>

using namespace std;

int main () {
    int n;
    cout << " Enteer the size of the array :" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the no of elements in the array :" << endl;
    for (int i=0 ; i<n ;i++)
    {
        cin >> arr[i];
    }
    int temp = arr[n-1];
    for (int i= n-1 ; i>0 ; i-- )
    {
       arr[i] = arr[i-1];
    }
    arr[0] =  temp;
    for (int i=0 ;i < n ; i++)
    {
        cout << " " <<arr[i];
    }
    return 0;
}