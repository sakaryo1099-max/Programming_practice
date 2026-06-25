#include <stdio.h>

int main(void){
    int k, s;
    int count = 0;

    scanf("%d %d", &k, &s);

    for(int i = 0; i <= k; i++){
        for(int j = 0; j <= k; j++){
             int z = s - i - j;

             if(0 <= z && z <= k){
                count++;
             }
        }
    }

    printf("%d\n", count);

    return 0;
}