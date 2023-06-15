//finding first n perfect numbers
#include<stdio.h>

int main() {
    //taking input (c=2 bcz 1 can divide every no.)
    long int a, b = 0, c = 2;
    printf("Enter the number of perfect to find: ");
    scanf("%ld", &a);
    //using while to find the first n no.s
    while (b < a) {
        //taking sum as 1 bcz 1 can divide every no.
        int sum = 1;
        //finding no. which can divide 'a' and then adding them
        for (int i = 2;i <= c/2;i++) {
            if (c % i == 0){
                sum += i;
            }
        }
        //if sum = c then that no. is a perfect no. and the code will print it and increasing c by 1
        if (sum == c) {
            printf("%ld\n", c);
            b++;
        }
        //if sum !=c then we will just increase the value of c by 1
        c++;
    }
    return 0;
}