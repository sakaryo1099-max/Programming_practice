#include <stdio.h>
#include <stdlib.h>

int main(){
    int N;
    int Y;

    scanf("%d %d", &N, &Y);

    for(int i = 0; i <= N; i++){
        for(int j = 0; j <= (N - i); j++){
            int k = N - i - j;
            if((10000*i + 5000*j + 1000*k) == Y){
                printf("%d %d %d", i, j, k);
                return 0;
            }
        }
    }


    printf("-1 -1 -1\n");

    return 0;
}