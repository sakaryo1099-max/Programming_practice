#include <stdio.h>
#include <math.h>
#include <string.h>


int main(void){
    char S[100001];
    char c;


    scanf("%s", S);

    int length = strlen(S);

    for(int i = 0; i < (length / 2); i++){
        c = S[i];
        S[i] = S[length - i - 1];
        S[length - i - 1] = c;
    }


    for(int i = 0; i < length; i++){
        if(strncmp(&S[i], "resare", 6) == 0){
            i += 5;
        }else if(strncmp(&S[i], "esare", 5) == 0){
            i += 4;
        }else if(strncmp(&S[i], "remaerd", 7) == 0){
            i += 6;
        }else if(strncmp(&S[i], "maerd", 5) == 0){
            i += 4;
        }else{
            printf("NO\n");
            return 0;
        }
    }


    printf("YES\n");

    return 0;
}