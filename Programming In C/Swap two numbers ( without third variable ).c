#include <stdio.h>
void main() {
    int a=0,b=0;
    printf("Give 1st Number : ");
    scanf("%d",&a);
    printf("Give 2nd Number : ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("1st Number : %d\n2nd Number : %d",a,b);
}