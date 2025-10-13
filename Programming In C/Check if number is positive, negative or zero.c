#include <stdio.h>
void main() {
    int n=0;
    printf("Enter a number : ");
    scanf("%d", &n);
    if (n > 0)
        printf("Positive number\n");
    if (n < 0)
        printf("Negative number\n");
    if (n == 0)
        printf("Zero\n");
}