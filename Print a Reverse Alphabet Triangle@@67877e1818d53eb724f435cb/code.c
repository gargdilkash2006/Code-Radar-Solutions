#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    for(int i=1 ; i<=N ; i++){
        for(int j=1 ; j<=N-i ; j++) printf(" ");{
            int a=65;
            for(int k=1 ; k<=N ; k++){
                printf("%c ",a);
                a++;
            }
        }
                printf("\n");
    }
}