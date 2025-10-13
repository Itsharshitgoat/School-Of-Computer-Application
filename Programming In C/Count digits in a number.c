#include <stdio.h>
void main() {
    int num=0,c=0;
    printf("Enter an Number : ");
    scanf("%d", &num);
    while(num!=0){
        num/=10;
        c++;
    }
    printf("Digits in the number : %d\n",c);
}