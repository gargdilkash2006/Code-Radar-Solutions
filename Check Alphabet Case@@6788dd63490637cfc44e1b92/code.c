#include <stdio.h>
int main() {
    char q;
    scanf("%c",q);
    if(q=='A') {
        printf("Uppercase");
    }
    else if(q=='a'){
        printf("Lowercase");
    }
    else {
        printf("Not an alphabet")
    }
    return 0;
}