//finding armstrong no.s by taking the input from user
#include<stdio.h>

int main(){

    long int a,b,c,sum;
    printf("enter the initial no. and final number(i,f) : ");
    scanf("%ld,%ld",&a,&b);
    //if b<a
    if (a > b) {
    a = a + b;
    b = a - b;
    a = a - b;
    }
    for(long int i=a;i<=b;i++){
        long int n=i;
        int c=0;
        // Count the number of digits which can be used as exponent value
        while(n) {
            c++;
            n/=10;
        }

        // divide no. by 10 to get remainder
        n=i;
        sum = 0;
        while(n>0) {
            int d = n % 10;
            long int p = 1;
            //use the remainder to multiply it with itself c times
            for (int k=1;k<=c;k++) {
                p*=d;
            }
            //we will now add the value of the digits which has been multiplied c times
            sum += p;
            //return the value of n divided by 10 ex- 1634/10=163.4 but as the value will be int so it will return only 163
            n/=10;   
        }
        //ii is the value of a in the current iteration
        if(sum==i){
            printf("%ld\n",i);
            
        }
    }       
    return 0;
}
    
    
    
