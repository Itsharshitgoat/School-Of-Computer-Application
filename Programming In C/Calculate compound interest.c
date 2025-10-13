#include <stdio.h>
void main() {
    float ci=0, p=0, r=0, t=0, n=0, a=0;
    printf("Given Principal Amount : ");
    scanf("%f", &p);
    printf("Given Annual Rate : ");
    scanf("%f", &r);
    printf("Given Number Of Times The Interest Is Compounded : ");
    scanf("%f", &n);
    printf("Given Time Period : ");
    scanf("%f", &t);
    r = r / 100;
    a = p * (1 + r / n) * (1 + r / n);
    ci = a - p;
    printf("Compound Interest Would Be : %f\n", ci);
}