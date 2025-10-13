#include <stdio.h>
void main() {
    float l=0, w=0 , p=0 , a=0;
    printf("Length Of A rectangle Is : ");
    scanf("%f", &l);
    printf("Breadth Of A rectangle Is : ");
    scanf("%f", &w);
    a = l*w;
    p = 2*(l+w);
    printf("The Area Would Be : %f\n", a);
    printf("The Perimeter Would Be : %f\n", p);
} 