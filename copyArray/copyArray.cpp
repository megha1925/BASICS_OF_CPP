// reverse of array   
#include <iostream>

using namespace std;

int main()
{
 int n;
 cout << "Enter the size of the array" << endl;
 cin >> n;
//  int* p;
//  p=&n;
//  cout << *p<<endl;
//  cout << &p<<endl;
 int *arr = new int(n);  //dynamic array

 for(int i = 0 ; i <n ;i++){
     cin>>arr[i];
 }
  for(int i = 0 ; i <n ;i++){
     cout<<arr[i]<<endl;
 }
 
//  int a1[n];
//  int a2[n];
//  cout << "Enter the elements in array" << endl;
//  for (int i=0; i<=n ; i++)
//  {
//       cin >> a1[i];
//  }
// for (int i=0; i<=n ; i++){
//     a2[i]= a1[i];
// }

//  cout << "\n" << "final array is  " << endl;

// for (int i=0 ; i<=n ; i++)
// {
//     cout << a2[i] << " \n";
// }
 return 0;
}