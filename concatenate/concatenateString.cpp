// concatenate the strings
#include <iostream>
#include <string>

using namespace std;

int main() { 
    string str1;
    string str2;
    cout << "Enter the strings : " << " "<<endl;
    cin >> str1 >> str2;
    //string hi= str1.append( " " + str2);
    string hi = str1 + " " + str2;

    cout << hi;
    return 0; 
}