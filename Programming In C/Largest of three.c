#include <stdio.h>
void main() {
    int a = 0, b = 0, c = 0;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    (a > b) ? (a > c ? a : c) : (b > c ? b : c);
    printf("Largest number is: %d");
}