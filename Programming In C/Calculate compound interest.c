#include <stdio.h>
void main() {
    float ci=0, p=0, r=0, t=0, n=0, a=0;
    scanf("%f", &p);
    scanf("%f", &r);
    scanf("%f", &n);
    scanf("%f", &t);
    r = r / 100;
    a = p * (1 + r / n) * (1 + r / n);
    ci = a - p;
    printf("%f\n", ci);
}