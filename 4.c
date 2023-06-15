/*//finding GCD with euclid's algorithm
#include<stdio.h>

int main(){
    //taking input
    int a,b,r;
    printf("enter 2 no.s(a,b) : ");
    scanf("%d,%d",&a,&b);
    //running euclid's algorithm
    while(b>0){
        r=a%b;
        a=b;
        b=r;
    }
    //printing output
    printf("GCD is %d\n",a);
}*/
#include<stdio.h>

    int main(){
        int x;
        scanf("%d\n",&x);
        int j;
        j= strlen(x);
        return 0;
    }