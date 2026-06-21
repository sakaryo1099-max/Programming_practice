#include <stdio.h>

int main(){

    char s[4];
    int count = 0;
    
    scanf("%s", s);

    for(int j = 0; j < 3; j++){
        if(s[j] == '1'){
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}