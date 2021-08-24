//LCM of two integers a and b is the smallest positive integer that is divisible by both a and b.
// LCM = (n1 * n2) / HCF
#include <iostream>

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

void lcm(int x, int y){
    int lcm;
    if(x>y){
        lcm =x;
    }else{
        lcm =y;
    }
    while(true){
        if(lcm%x == 0 && lcm%y ==0){
            cout<<lcm;
            break;
        }
        lcm++;
    }                             
}

int main(){
    int n1 , n2 , gcd1 , lcf;
    cout << "Enter the numbers to find the LCM:" << endl;
    cin >> n1 >> n2 ;
    //lcm(n1, n2 );
    gcd1 = gcd(n1,n2);
    lcf = (n1*n2)/gcd1;
    cout<<lcf;
    return 0;
}