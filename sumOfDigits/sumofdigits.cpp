#include <iostream>

using namespace std;

int main() {
    int x;
    int sum = 0;
    int y;
    cout << "Enter a number:" << endl;
    cin >> x;
    while(x>0){
        y = x%10;
        sum = sum + y;
        x = x/10;
    }
   cout << sum;
   return 0;

}