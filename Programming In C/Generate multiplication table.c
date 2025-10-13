#include <stdio.h>
int main() {
    int n=0,i=0,m=0;
    printf("Give a number : ");
    scanf("%d", &n);
    for(i = 1; i <= 10; i++) {
        m=n*i;
        printf("%d x %d = %d\n",n,i,m);
    }
}