#include <stdio.h>

int main(void){
    char S[5];

    scanf("%s", S);

    for(int mask = 0; mask < (1 << 3); mask++){
        int sum = S[0] - '0';

        for(int i = 0; i < 3; i++){
            if(mask & (1 << i)){
                sum += S[i + 1] - '0';
            }else{
                sum -= S[i + 1] - '0';
            }
        }

        if(sum == 7){
            printf("%c", S[0]);

            for(int i = 0; i < 3; i++){
                if(mask & (1 << i)){
                    printf("+");
                }else{
                    printf("-");
                }

                printf("%c", S[i + 1]);
            }

            printf("=7\n");
            return 0;
        }
    }

    return 0;
}