#include <stdio.h>
#include <math.h>
void main() {
    int n=0,tem=0,rem=0,d=0,r=0;
    printf("Enter a number : ");
    scanf("%d", &n);
    tem=n;
    while (tem!=0) {
        d++;
        tem=tem/10;
    }
    tem=n;
    while(tem!=0){
        rem=tem%10;
        r=r+pow(rem,d);
        tem=tem/10;
    }
    if (n==r)
        printf("%d is an Armstrong number",n);
    else
        printf("%d is not an Armstrong number",n);
} 