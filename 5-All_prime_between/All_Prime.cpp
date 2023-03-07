#include<iostream>
using namespace std;
int main(){

int n;
cout<<"Enter a number\n";
cin>>n;

for(int x=2;x<n;x++){
    int flag =0;
    for(int i=2;i<=x/2;i++){
        if(x%i==0){
            flag=1;
            break;
        }
    }
    if (flag==0){
        cout<<x<<endl;
    }

}


    return 0;
}