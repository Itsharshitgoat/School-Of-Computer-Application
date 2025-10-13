#include <stdio.h>
void main() {
    int n=0,i=1,m=0;
    printf("Enter the limit : ");
    scanf("%d",&n);
    printf("All the natural numbers :");
    for(i=1;i<=n;i++){
        printf(" %d",i);
    }
    printf("\n");
    printf("All the even numbers :");
    for(i=1;i<=n;i++){
        if(i%2==0)
        printf(" %d",i);
        else
        continue;
    }
    printf("\n");
    printf("All the odd numbers :");
    for(i=1;i<=n;i++){
        if(i%2==0)
        continue;
        else
        printf(" %d",i);
    }
    printf("\n");
    printf("All the multiples of the numbers :");
    for(i = 1; i <= 10; i++) {
        m=n*i;
        printf(" %d",m);
    }
}