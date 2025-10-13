#include <stdio.h>
void main() {
    float ai=0, b=0 , c=0 , a=0 , p=0;
    printf("1st Of A Triangle Is : ");
    scanf("%f", &a);
    printf("2nd Of A Triangle Is : ");
    scanf("%f", &b);
    printf("3th Of A Triangle Is : ");
    scanf("%f", &c);
    ai = a*b;
    p = a+b+c;
    printf("The Area Would Be : %f\n", ai);
    printf("The Perimeter Would Be : %f\n", p);
} 