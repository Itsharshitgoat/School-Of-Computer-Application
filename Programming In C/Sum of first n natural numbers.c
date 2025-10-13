#include <stdio.h>
void main() {
    int l=1,i=0,s=0;
    printf("Enter a number : ");
    scanf("%d", &i);
    for(l=1;l<=i;l++){
        s=s+l;
    }
    printf("Sum of numbers is : %d",s);
}