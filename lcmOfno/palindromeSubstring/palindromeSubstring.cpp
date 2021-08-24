#include <iostream>
#include <string>

using namespace std;

int palin(string str)
{
    int strLen = str.length();
    if (strLen == 1)
    {
        return false;
    }
    for (int i = 0; i < strLen / 2; i++)
    {
        if (str[i] != str[strLen - i - 1])
        {
            return false;
        }
    }
    return true;
}

void subPalindrome(string str1)
{
    string sub;
    int end = 0, start = 0;
    int len = str1.length();
    int len2;
    while (end <= len)
    {
        if (str1[end] != '\0' && str1[end] != ' ')
        {
            end++;
        }
        else
        {
            len2 = end - start;
            sub = str1.substr(start, len2);
            if (palin(sub))
            {
                for (int i = start; i < end; i++)
                {
                    str1[i] = '*';
                }
            }
            end++;
            start = end;
        }
    }
    cout << endl;
    cout << str1;
}

int main()
{
    string str;
    cout << "Enter the string : " << endl;
    getline(cin, str);
    subPalindrome(str);
    return 0;
}