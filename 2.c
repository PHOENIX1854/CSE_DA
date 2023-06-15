//evaluating grade from marks
#include<stdio.h>

int main() {
	int marks;
	printf("\nenter the mark of the subject : ");
    //taking input:
	scanf("%d", &marks);
    int s;
    s=marks/10;
    if(s>10){
        printf("%d is not correct\n",marks);
    }
    else{
        switch(s) {
            case 10:
            case 9: 
                printf("O\n"); 
                break;
            case  8:
                printf("A\n");
                break;
            case 7 :
                printf("B\n"); 
                break;       
            case 6 :
                printf("C\n"); 
                break;    
            default:{
                printf("D\n");
                break;
            }
        }
    }
    return 0;
}