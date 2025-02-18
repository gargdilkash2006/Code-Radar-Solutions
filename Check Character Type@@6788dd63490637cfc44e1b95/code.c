#include <stdio.h>
int main () {
    char c;
    scanf("%d",&c);
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u') {
        printf("Vowel");
    }
    else if(c >= 'a' && c <= 'z' && (c!='a' || c!='e' || c!='i' || c!='o' || c!='u')) {
        printf("Consonant");
    }
    else if()
return 0;
}