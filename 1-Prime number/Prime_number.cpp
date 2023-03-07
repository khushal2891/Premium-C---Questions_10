#include<iostream>
#include<cmath>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number , to find it is prime or not ?\n";
    cin>>n;

    bool flag=0;

    for (int i=2;i<=sqrt(n);i++){
        if (n%i==0){
            cout<<" NON Prime";
            flag=1;
            break;
        }

        if (flag==0){
            cout<<"Prime number";
        }
        
      }

    return 0;
}
