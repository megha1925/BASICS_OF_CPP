//call by value
#include <iostream>

using namespace std;

int mul(int x, int y){
    return(x*y);
}

int main() {
    int a , b;
    cout << "enter a no:" << endl;
    cin >> a;
    cout << "enter another no:" << endl;
    cin >> b;
    cout << "multiplication is =" << mul(a,b);
    return 0;
}