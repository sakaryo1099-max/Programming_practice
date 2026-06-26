#include <stdio.h>
#include <string.h>

int main(void){
    char s[100001];

    scanf("%s", s);

    size_t length = strlen(s); 
    char r[50001];

    for(int i = 0; i < length; i++){
        if((i % 2) == 0){
            r[(i / 2)] = s[i];
        }
    }

    printf("%s\n", r);

    return 0;
}