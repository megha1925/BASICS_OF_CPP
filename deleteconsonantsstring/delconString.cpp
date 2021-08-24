// del consonants from the given line " hello have a good day"
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string str;
    int count=0;
    cout << "Enter the sentence: " << endl;
    getline(cin , str);

    int len = str.length();
    for(int i=0 ; i< len ; i++)
    {
        if(str[i] == 'a' || str[i]=='e' || str[i] == 'i' || str[i] == 'o'|| str[i]== 'u' || str[i]== ' ')
        { 
           cout <<str[i];
        }
    }
    return 0;
}