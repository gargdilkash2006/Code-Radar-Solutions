#include <stdio.h>
int main() {
    int z;
    scanf("%d",&z);
    if (z>0) {
        printf("Positive");
    }
    else if(z<0) {
        printf("Negative");
    }
    else {
        printf("Zero");
    }
    return 0;

}