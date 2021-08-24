// fibonacci series sum
#include <iostream>

using namespace std;

void fibSum( int n){
    int n1=0, n2=1 ,n3 ,sum=1;
    if(n==1){
        cout << "0";
    }
    else if(n==2)
    {
       cout<<"1";
    }
    else
    {
        for(int i=2; i< n; ++i)
        {
            n3= n1+n2;
            sum += n3;       
            n1 =n2;
            n2 = n3;
        }
       cout<<sum;
    }
    
}

int main(){
    int num;
    cout << "Enter the number of series:" << endl;
    cin >> num;
    fibSum(num);
    return 0;
}

