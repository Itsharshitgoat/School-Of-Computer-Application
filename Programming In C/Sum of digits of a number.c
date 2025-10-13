#include <stdio.h>
int main() {
    int n,s=0;
    printf("Which Number Sum You Want To Know : ");
    scanf("%d",&n);
    while(n!=0) {
        s=s+n%10;
        n=n/10;
    }
    printf("Here Is The Ans - %d\n",s);
}