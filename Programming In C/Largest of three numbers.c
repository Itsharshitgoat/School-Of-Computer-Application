#include <stdio.h>
int main() {
    int a = 0, b = 0, c = 0;
    printf("1st Number : ");
    scanf("%d", &a);
    printf("2nd Number : ");
    scanf("%d", &b);
    printf("3rd Number : ");
    scanf("%d", &c);
    int max = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
    printf("Largest number is: %d", max);
}