#include <stdio.h>
int main () {
    int N;
    scanf("%d",&N);
    for(int i=1 ; i<=N ; i++){
        for(int j=1 ; j<=N ; j++){
            if(i=N+1/2 || j=N+1/2){
                printf("* ");
            }
            else{
                printf(" ");
            }
        }
                printf("\n");
    }
}