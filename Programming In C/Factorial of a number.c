#include <stdio.h>
void main() {
    int i, l, m = 1;
    printf("Give Which Number Factorial You Want To Know : ");
    scanf("%d", &i);
        for (l = 1; l <= i; l++) {
            m = m * l;
        }
        printf("Here Is The Ans - %d\n", m);
}