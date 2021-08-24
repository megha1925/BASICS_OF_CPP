//Write a program to reverse the digits a number using pointers.
#include <iostream>

using namespace std;

void revDigits(int x)
{
  int *ptr;
  int temp, rev = 0;
  ptr = &x;
  while (*ptr > 0)
  {
    temp = *ptr % 10;
    rev = rev * 10 + temp;
    *ptr = *ptr / 10;
  }
  cout << rev;
}

int main()
{
  int n;
  cout << " Enter the number : " << endl;
  cin >> n;
  revDigits(n);
  return 0;
}