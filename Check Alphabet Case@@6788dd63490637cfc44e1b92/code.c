#include <stdio.h>
int main() {
    char q;
    scanf("%c",&q);
    if(q=='A' || q=='M') {
        printf("Uppercase");
    }
    else if(q=='z'){
        printf("Lowercase");
    }
    else {
        printf("Not an alphabet");
    }
    return 0;
}