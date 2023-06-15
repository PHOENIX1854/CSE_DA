#include<iostream>
using namespace std;

int main(){

    int pocketmoney=15000;
    for(int date=1;date<=31;date++){
        if(date%2==0){
            continue;
        }
        if(pocketmoney==0){
            break;
        }
        pocketmoney=pocketmoney-500;
        cout<<"on "<<date<<" you can go"<<" and spend "<<pocketmoney<<endl;        
    }
}