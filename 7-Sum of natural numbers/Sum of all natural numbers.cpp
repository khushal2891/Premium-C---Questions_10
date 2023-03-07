// #include<iostream>
// #include<cmath>
// #include<math.h>
// using namespace std;
// int main(){
//     int n , ans=0;

//     cout<<"Enter a number";
//     cin>>n;
     
//      for (int i=1;i<=n;i++){
//         ans+=i;
        
//      }
//      cout<<ans;

//     return 0;
// }

// with Function

#include<iostream>
#include<cmath>
#include<math.h>
using namespace std;

int sum(){
    int n , ans=0;

    cout<<"Enter a number";
    cin>>n;
     
     for (int i=1;i<=n;i++){
        ans+=i;
        
     }
     return  ans;



}

int main(){
 sum();
 cout<<sum();
 return 0;   
}