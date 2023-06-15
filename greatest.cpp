#include<iostream>
using namespace std;

int main(){

    int a; int b; int c;
    cin>>a>>b>>c;

    if(a>c){
        if(a>b){
            cout<<a<<" is greatest"<<endl;
        }
        else{
            cout<<b<<" is greatest"<<endl;
        }
    }
    else{
        if(c>b){
            cout<<c<<" is greatest"<<endl;
        }
        else{
            cout<<b<<" is greatest"<<endl;
        }
    }
}