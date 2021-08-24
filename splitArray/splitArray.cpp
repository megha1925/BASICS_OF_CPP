/* Take an array of 10 elements. Split it into middle and store the elements in two dfferent arrays. E.g.-
INITIAL array :
58    24    13    15    63    9    8    81    1    78

After spliting :
58    24    13    15    63
9    8    81    1    78*/

#include <iostream>

using namespace std;

void split( int *arr , int a )
{
  int m=a/2, i , j;
  int p[m];
  int t[m];
  for (i=0, j=m ; i<m , j<a; i++ , j++)
  {
    p[i]= arr[i];
    t[i] = arr[j];
  }
 for(i=0  ; i<m ; i++ )
 {
   cout << p[i];
 }

 cout << endl;

 for (j=0 ; j<m ; j++ ){
   cout << t[j];
 }

}

int main () 
{
  int n ;
  cout << "Enter the size of the array : " << endl;
  cin >> n;
  int *arr = new int(n);
  cout << "Enter the elements of the array :" << endl;
  for (int i=0 ; i<n ; i++)
  {
    cin >> arr[i];
  }
  split(arr , n);
  delete arr;
  return 0;
}