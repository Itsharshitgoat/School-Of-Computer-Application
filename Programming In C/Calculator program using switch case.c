#include <stdio.h>
void main() {
    int c, a, b, sum, mul, sub, dive;
    printf("Give me a Number (1:Add, 2:Subtract, 3:Multiply, 4:Divide): ");
    scanf("%d", &c);
    switch(c) {
        case 1: 
            printf("1st number: ");
            scanf("%d", &a);
            printf("2nd number: ");
            scanf("%d", &b);
            sum = a + b;
            printf("Sum = %d", sum);
            break;
        case 2: 
            printf("1st number: ");
            scanf("%d", &a);
            printf("2nd number: ");
            scanf("%d", &b);
            sub = a - b;
            printf("sub = %d", sub);
            break;
        case 3: 
            printf("1st number: ");
            scanf("%d", &a);
            printf("2nd number: ");
            scanf("%d", &b);
            mul = a * b;
            printf("mul = %d", mul);
            break;
        case 4:
            printf("1st number: ");
            scanf("%d", &a);
            printf("2nd number: ");
            scanf("%d", &b);
            dive = a / b;
            printf("div = %d", dive);
            break;
        default:
            printf("Wrong Choice");
    }
}