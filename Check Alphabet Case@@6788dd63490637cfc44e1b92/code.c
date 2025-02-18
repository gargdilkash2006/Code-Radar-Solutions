#include <stdio.h>
int main() {
    char q;
    scanf("%c",&q);
    if(q>='A' && q<='Z') {
        printf("Uppercase");
    }
    else if(q=='z' || q=='g'){
        printf("Lowercase");
    }
    else {
        printf("Not an alphabet");
    }
    return 0;
}