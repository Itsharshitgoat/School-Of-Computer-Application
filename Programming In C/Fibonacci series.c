#include <stdio.h>
void main() {
    int i = 0, l = 2, a = 0, b = 1, sum = 0;
    printf("How Many Times I Have To Run This Series : ");
    scanf("%d", &i);
    if(i >= 2) {
        printf("%d %d", a, b);
    }
    for(l = 2; l<i; l++) {
        sum = a + b;
        printf(" %d", sum);
        a = b;
        b = sum;
    }
}