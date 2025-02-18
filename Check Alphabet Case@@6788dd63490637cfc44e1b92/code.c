#include <stdio.h>
int main() {
    char q;
    scanf("%c",&q);
    if(q>='A' && q<='Z') {
        printf("Uppercase");
    }
    else if(q>='a' && q<='z'){
        printf("Lowercase");
    }
    else {
        printf("Not an alphabet");
    }
    return 0;
}