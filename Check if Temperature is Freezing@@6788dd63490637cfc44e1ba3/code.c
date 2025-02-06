#include <stdio.h>
int main() {
    int q;
    scanf("%d",&q);
    if(q<=0) {
        printf("Freezing");
    }
    else {
        printf("Above Freezing");
    }
    return 0;
}