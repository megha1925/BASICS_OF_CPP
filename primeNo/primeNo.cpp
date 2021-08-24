// check whether it is a prime num
// greater than 1
// 2 3 5 7 11 13 17 19 23
#include <iostream>

using namespace std;

void prime(int n){
 bool isPrime = true;
   for(i = 2; i <= n / 2; ++i)
  {
      if(n % i == 0)
      {
          isPrime = false;
          break;
      }
  }
  if (isPrime)
      cout << "This is a prime number";
  else
      cout << "This is not a prime number";

}
  
int main(){
    int num;
    cout << "Enter the number:" << endl;
    cin >> num;
    prime(num);
    return 0;
}