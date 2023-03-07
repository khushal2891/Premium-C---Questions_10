#include<iostream>
#include<fstream>
using namespace std;
int main(){
    // ofstream hout("sample.txt");
    // cout<<"Enter your name ";
    // string name;
    // cin>>name;

    // hout<<name+"_is_my_name_!";
    // hout.close();

    ifstream hin("sample.txt");
    string content ;
    hin>>content ;
    cout<<"This is content : "<<content;
    hin.close();


return 0;
}