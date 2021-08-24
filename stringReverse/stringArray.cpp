//reverse the string

#include <iostream>
#include <string>

using namespace std;

int main(){
    string name;
    string rev; 
    int i , j;
    cout << "Enter Name" << endl;
    cin >> name;
    int len = name.length();

    for (i= len-1 ; i>=0 ; i-- )
   {
       rev.push_back(name[i]);
   }
   cout<<rev;
    return 0;
}