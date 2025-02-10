#include <stdio.h>
int main() {
    int q;
    scanf("%d",&q);
    if(q>=18) {
        printf("Eligible");
    }
    else {
        printf("Not Eligible");
    }
    return 0;
}