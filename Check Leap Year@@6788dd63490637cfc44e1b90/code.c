#include <stdio.h>
int main() {
    int s;
    scanf("%d",&s);
    if((s%4==0 || s%400==0) && s%100!=0) {
        printf("Leap Year");
    }
    else {
        printf("Not a Leap Year");
    }
    return 0;
}