#include <stdio.h>
void main() {
    int y;
    printf("Enter Year : ");
    scanf("%d",&y);
    if(y%4==0)
    printf("it's Leap year");
    else
    printf("Iy's not a Leap year");
}