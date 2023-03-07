#include<iostream>
#include<cmath>
#include<math.h>
using namespace std;

void fibonnaci(int n ){
    int a=0,b=1, nextterm;
    for(int i=1;i<=n;i++){
        cout<<a<<endl;
        nextterm=a+b;
        a=b;
        b=nextterm;
        
        }
        return ;

};
int main(){
    int n;
    cin>>n;
       fibonnaci(n);
    return 0;
}