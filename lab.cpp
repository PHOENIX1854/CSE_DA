#include<iostream>
using namespace std;

class bankacc{
    public:
        float balance;
        int accountno;
};
    
int main(){
    bankacc bankacc;
    bankacc.balance=1000;
    cout<<"1000 amount deposited"<<endl;
    int c,s;
    cout<<"enter the amount to be withdrawn"<<endl;
    cin>>c;
    if(c<bankacc.balance){
        s=bankacc.balance-c;
        cout<<"estimated balance "<<s<<endl;
    }
    else{
        cout<<"Error message indicating insufficient funds."<<endl;
    }



}

