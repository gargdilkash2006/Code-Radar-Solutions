#include <stdio.h>
int main () {
    int N;
    scanf("%d",&N);
    for(int i=1 ; i<=N ; 10*i){
        printf("%d %d %d",i,N,i*N);
    }
    return 0;
}