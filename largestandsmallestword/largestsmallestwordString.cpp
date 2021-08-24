// to find he largest word and the smallest word
#include <iostream>
#include <string>

using namespace std;

void minMax(string word)
{
    string largest, smallest;
    int strLen = word.length();
    int startIndex = 0, endIndex = 0;
    int maxlength = 0, minLength = strLen;
    int currentLength;
    while (endIndex <= strLen)
    {
        if (word[endIndex] != '\0' && word[endIndex] != ' ')
        {
            endIndex++;
        }
        else
        {
            currentLength = endIndex - startIndex;
            if (currentLength < minLength)
            {
                smallest = word.substr(startIndex, currentLength);
                minLength = currentLength;
            }
            if (currentLength > maxlength)
            {
                largest = word.substr(startIndex, currentLength);
                maxlength = currentLength;
            }
            endIndex++;
            startIndex = endIndex;
        }
    }
    cout << "the smallest word is: " << smallest << endl;
    cout << "the largest word is: " << largest;
}

int main()
{
    string str;
    cout << "Enter the sentence : " << endl;
    getline(cin, str);
    minMax(str);
}