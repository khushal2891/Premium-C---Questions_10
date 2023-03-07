#include<iostream>
#include<cmath>
#include<math.h>
using namespace std;
int main(){
        int n,i , fact=1;
    cout<<"Enter a number to find Factorial";
    cin>>n;

    for (i=1;i<=n;i++){
        fact = fact *i;
    }
        cout<<"Factorial : "<<fact;



    return 0;
}