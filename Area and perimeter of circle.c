#include <stdio.h>
void main() {
    float pi=3.14, r=0, a=0 , p=0;
    printf("Radius Of A Circle Is : ");
    scanf("%f", &r);
    a = pi*r*r;
    p = 2*pi*r;
    printf("The Area Would Be : %f\n", a);
    printf("The Perimeter Would Be : %f\n", p);
}