#include <stdio.h>
int main() {
    int i;
    scanf("%d",&i);
    if(i>0) {
        printf("Positive");
    }
    else if(i<0) {
        printf("Negative");
    }
    else {
        printf("Zero");
    }
    return 0;
}