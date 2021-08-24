//call by refrence
#include <iostream>

using namespace std;

int mul(int *x , int *y){
    int m;
    m = (*x *  *y);
    return m;
}

int main(){
    int a , b;
    cout << "Enter a no:" << endl;
    cin >> a;
    cout << "Enter another no:" << endl;
    cin >> b;
    cout << "your answer is :" << mul(&a,&b);
    return 0;
}