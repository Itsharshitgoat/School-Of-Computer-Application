#include <stdio.h>
void main() {
    int a=0,b=0;
    scanf("%d",&a);
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d\n%d",a,b);
}