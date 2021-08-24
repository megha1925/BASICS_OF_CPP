// anagram string
#include <iostream>
#include <string>

using namespace std;

void anagram(string a, string b)
{
    int i, j;
    bool flag = false, flag1 = false;
    int len1 = a.length();
    int len2 = b.length();
    if (len1 != len2)
    {
        cout << "IT IS NOT ANAGRAM" << endl;
    }
    else
    {
        for (i = 0; i < len1; i++)
        {
            flag = false;
            for (j = 0; j < len2; j++)
            {
                if (a[i] == b[j])
                {
                    flag = true;
                    break;
                }
            }
            if (!flag)
            {
                flag1 = true;
                break;
            }
        }
        if (flag1)
        {
            cout << "STRING IS not ANAGRAM" << endl;
        }
        else
        {
            cout << "STRING IS  AN ANAGRAM " << endl;
        }
    }
}

int main()
{
    string str1, str2;
    cout << "Enter the two strings : " << endl;
    cin >> str1 >> str2;
    anagram(str1, str2);
    return 0;
}