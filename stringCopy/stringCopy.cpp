// copy string from one string to another

#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1 , str3; 
    cout << " Enter the character :" << endl;
    cin >> str1;
    str3 = str1;
    // int len = str1.length();
    // int n = len;
    // char str2[n];
    // for  ( int i=0 ; i< len   ; i++)
    // {
    //     str3[i] = str1[i];
    // }
    cout << str3;
    return 0;
}