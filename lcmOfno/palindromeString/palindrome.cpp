//palindrome of a string
#include <iostream>
#include <string>

using namespace std;

void palindrome(string str2)
{
    bool flag = true;
    int len = str2.length();
    for (int i = 0; i < len; i++)
    {
        if (str2[i] != str2[len - i - 1])
        {
            flag = false;
            break;
        }
    }
    if (flag)
    {
        cout << "STRING IS PALINDROME " << endl;
    }
    else
    {
        cout << "String is not palindrome ";
    }
}

int main()
{
    string str;
    cout << "Enter the string : " << endl;
    cin >> str;
    palindrome(str);
    return 0;
}