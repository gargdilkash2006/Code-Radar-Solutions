#include <stdio.h>
int main() {
    int q ,w;
    scanf("%d",&q);
    scanf("%d",&w);
    if(q==w*w) {
        printf("Yes");
    }
    else {
        printf("No");
    }
    return 0;
}