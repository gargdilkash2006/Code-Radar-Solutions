#include <stdio.h>
int main () {
    int s , r;
    scanf("%d",&s);
    scanf("%d",&r);
    if(s%r==0) {
        printf("Yes");
    }
    else {
        printf("No");
    }
}