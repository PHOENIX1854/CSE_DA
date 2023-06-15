#include<iostream>
using namespace std;

int main(){

    int a;
    cin>>a;
    int s=0;
    for(int c=0;c<=a;c++){
        s=s+c;
        cout<<s<<endl;
    }
    cout<<s+s;
}