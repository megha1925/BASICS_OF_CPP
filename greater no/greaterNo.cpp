#include <iostream>

using namespace std;

void greatest(int x, int y, int z){
    //  if(x>y && x>z)
    //  {
    //      cout<< x;
    //  }
    // else if(y>x && y>z)
    // {
    //     cout << y;
    // }
    // else{
    //     cout << z;
    // }
    if(x>y){
        if(x>z){
            cout <<x;
        }
        else{
            cout<<z;
        }
    }
    else{
        if(y>z){
            cout<<y;
        }
        else{
            cout<<z;
        }
    }
}


int main(){
    int a , b , c;
    cout << "Enter numbers:" <<endl;
    cin >> a >> b >> c;
    greatest(a, b , c);
    return 0;
}