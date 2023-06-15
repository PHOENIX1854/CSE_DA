//using ternary opretor to find the largest value
#include<stdio.h>

int main(){
    int a,b,c;
    printf("enter the three numbers(a,b,c) : ");
    scanf("%d,%d,%d",&a,&b,&c);
    //1st condition will define if a or c is greatest if not then 2nd will define b or c is greatest
    (a>b)?((a>c)? printf("%d is largest\n",a):printf("%d is latgest\n",c)):(b>c)? printf("%d is largest\n",b):printf("%d is largest\n",c);
    return 0;
}