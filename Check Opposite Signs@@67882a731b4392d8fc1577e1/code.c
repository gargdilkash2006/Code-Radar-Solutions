#include <stdio.h>
int main() {
    int s , r ;
    scanf("%d",&s);
    scanf("%d",&r);
    if (s<0 && r>0 ||s>0 && r<0){
        printf("True");
    }
    else {
        printf("False");
    }
    return 0;
}