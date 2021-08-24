// program to convert farenheit to celcius and celcius to farenheit using functions

#include <iostream>

using namespace std;

int temp1(int c){
    int f;
    f= (9*c+32)/5;
    return f;
}
int temp2(int f){
    int c;
    c= (f-32)*5/9;
    return c;
}

int main() 
{
    int n;
    float a ,b;
    cout << "Enter 1 for converting to farenheit or 2 for converting to celcius:" << endl;
    cin >> n;
    if(n==1){
        cout << "enter temp in celcius"<< endl;
        cin >> a;
        cout << "farenheit =" << temp1(a);
    }
    else
    {
    cout << "enter temp in farenheit" << endl;
    cin >> b;
    cout << "celcius = " << temp2(b);
    }
    return 0;
}