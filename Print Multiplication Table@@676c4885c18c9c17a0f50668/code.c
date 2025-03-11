#include <stdio.h>
int main () {
    int N , i=1;
    scanf("%d",&N);
    int a = N*i;
    for(int i= 1 ; i<=10 ; i++) {
        printf("%d * %d = %d\n" , N , i , a);
    }
}