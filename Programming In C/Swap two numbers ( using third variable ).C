#include <stdio.h>
void main() {
    int a=0,b=0,temp=0;
    printf("Give 1st Number : ");
    scanf("%d",&a);
    printf("Give 2nd Number : ");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("1st Number : %d\n2nd Number : %d",a,b);
}