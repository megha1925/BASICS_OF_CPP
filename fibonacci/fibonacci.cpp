#include <iostream>  
using namespace std;  

void fib(int x){
    int n1=0 , n2=1 , n3 ;

    if(x==1)
    {
        cout<<"0";
    }
    else if(x==2)
    {
        cout<<n1 <<" "<<n2;
    } 
    else
    {
        cout<<n1<<" "<<n2<<" ";
        for(int i=2 ; i < x ; ++i){
            n3 = n1+n2;
            cout<<n3<<" ";
            n1=n2;
            n2=n3;
        }
    }
}
int main() {  
  int number;    
 cout<<"Enter the number of elements: ";    
 cin>>number;    
 fib(number);   
return 0;  
}  