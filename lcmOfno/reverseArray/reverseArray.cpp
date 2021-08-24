//reverse of array
#include <iostream>

using namespace std;

int main() {
    int n ;
    cout << "Enter the size of the array : " << endl;
    cin >> n;
  
    int *a1 = new int(n);
    int *a2 = new int(n);

    for (int i=0 ; i<n ; i++)
    {
      cin >> a1[i];
    }
    for (int i=0 ; i<n ; i++)
    {
      a2[i] = a1[n-i-1];
        
    }
     for (int i=0 ; i<n ; i++)
    {
      cout<<a2[i]<<endl;
    }
    return 0;
}