#include<iostream>
#include<cmath>
#include<math.h>
using namespace std;
int main(){
    int n ,reverse, lastdigit ;

     cout<<"ENter N\n";
     cin>>n;
    while (n>0){
        lastdigit =n%10;
        reverse = reverse*10;
        reverse = reverse+ lastdigit;
        n=n/10;
        cout<<lastdigit;
        
    }

    return 0;
}