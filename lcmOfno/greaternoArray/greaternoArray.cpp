//to find greatest no in array

#include <iostream>

using namespace std;

void greatestno(int *arr  , int a)
{
    int max = arr[0];
    for ( int i=0 ; i<a ; i++)
    {
        if(arr[i]>max)
        {
           max = arr[i];
        }

    }
  cout << max;
}

int main(){
    int n;
    cout << "Enter the size of  the array: " << endl;
    cin >> n;
    int *arr = new int(n);
    cout << "Enter the no of elements in the array :" << "\n" << endl;
    for(int i=0; i<n ; i++)
    {
        cin >> arr[i];
    }
    greatestno(arr , n);
    return 0;
}