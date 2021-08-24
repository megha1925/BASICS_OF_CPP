/*
 
 The largest integer which can perfectly divide two integers is known as GCD or HCF of those two numbers.

 */

 #include<iostream>

 using namespace std;

 int gcd(int x , int y){
     int gcd;
    if(y>x){
         int temp = y;
         y = x;
         x= temp;
     }
    for(int i = 1; i<= y ;++i){
        if(x%i==0 && y%i==0){
            gcd=i;
        }
    }
    return gcd;
 }

 int main(){
     int a , b ;
     cout<<"Enter 2 numbers";
     cin>>a>>b;
 
    cout<<gcd(a,b);
    return 0;
     
 }