// sum and product of an array
#include <iostream>

using namespace std;

/*void sum( int *arr , int x )
{
    int sum=0;
    for (int i=0 ; i<x ;i++)
    {
      sum = sum + arr[i];
    }
    cout << sum;
}*/

int main() {
    int n , sum = 0;
    cout << "Enter the size of the array :" << endl;
    cin >> n ;
    int *arr = new int(n);
    cout << "Enter the elements: " << endl;
    for ( int i=0 ; i<n ;i++){
        cin >> arr[i];
    }
    for (int i=0 ; i<n ; i++)
    {
        cout<<arr[i];
    }
    
    cout << sum;
    delete arr;
    //sum(arr , n);
    return 0;
}