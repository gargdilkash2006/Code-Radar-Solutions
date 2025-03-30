#include <stdio.h>
int main (){
    int N;
    scanf("%d",&N);
    for(int i=1 ; i<=N ; i++){
        int a=65;
        for(int j=1 ; j<=N ; j++){
            printf("%c ",a);
            a++;
        }
            printf("\n");
    }
}