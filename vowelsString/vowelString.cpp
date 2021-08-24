//find the vowels in string

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
  string word;
  string low;
  int count= 0;
  cout << "Enter the word : " << endl;
  cin >> low;
  int len = low.length();
  for( int i=0 ; i<len ; i++)
  {
      if(word[i]=='a' || word[i] == 'e'  || word[i]=='i'  || word[i]=='o' || word[i]=='u' )
      {
        ++count;
      }

  }

  cout << count;
  return 0;
}