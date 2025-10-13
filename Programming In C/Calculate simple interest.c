#include <stdio.h>
void main() {
    float si=0,p=0,r=0,t=0;
    printf("Given Principal Amount : ");
    scanf("%f", &p);
    printf("Given Annual Rate : ");
    scanf("%f", &r);
    printf("Given Time Period : ");
    scanf("%f", &t);
    si=p*r*t/100;
    printf("Simple Interest Would Be : %f\n",si);
}