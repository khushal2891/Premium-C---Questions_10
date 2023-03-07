#include<iostream>
#include<cmath>
#include<math.h>
using namespace std;
int main(){
     int n,sum=0,originaln , lastdigit;
    cout<<"Enter a number\n";
    cin>>n;
     originaln=n;

    while (n!=0)
    {  lastdigit=n%10;
    sum = sum+lastdigit*lastdigit*lastdigit;
      n=n/10;
      
      }
     if (sum==originaln){
        cout<<"Armstrong number";

     }
else {
    cout<<"NON Armstrong number";
}
    
    return 0;
}