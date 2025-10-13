#include <stdio.h>
void main() {
    int a = 0, b = 0;
    printf("1st Number : ");
    scanf("%d", &a);
    printf("2nd Number : ");
    scanf("%d", &b);
    (a > b) ? printf("%d is grater",a):printf("%d is grater",b);
}