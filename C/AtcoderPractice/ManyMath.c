//たくさんの数式

#include <stdio.h>
#include <string.h>


int main(void){
    char S[10];

    scanf("%s", S);

    int n = strlen(S);

    long long ans = 0;

    for(int mask = 0; mask < (1 << (n - 1)); mask++){
        long long sum = 0;
        long long current = 0;

        for(int j = 0; j < n; j++){
            current = current * 10 + S[j] - '0';

            if(mask & (1 << j)){
                sum += current;
                current = 0;
            }
        }

        sum += current;
        ans += sum;
    }

    printf("%lld\n", ans);
}