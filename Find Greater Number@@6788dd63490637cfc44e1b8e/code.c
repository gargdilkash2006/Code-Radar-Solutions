#include <stdio.h>
int main() {
    int x , y;
    scanf("%d %d",&x,&y);
    if(x<y) {
        printf("%d",y);
    }
    else {
        printf("%d",x);
    }
    return 0;
}