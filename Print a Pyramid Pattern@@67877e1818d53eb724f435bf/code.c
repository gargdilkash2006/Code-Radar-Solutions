#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    for(int i=1 ; i<=N ; i++){
        for(int j=1 ; j<=n-i ; j++) {printf(" ");}
           for(int k=1 ; k<=n ; k++) {
            printf("* ");
           }
            printf("\n");
    }

    return 0;
}