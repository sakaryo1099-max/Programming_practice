#include <stdio.h>
#include <stdlib.h>

int main(void){
    int N;
    int t[100000], x[100000], y[100000];

    scanf("%d", &N);

    for(int i = 0; i < N; i++){
        scanf("%d %d %d", &t[i], &x[i], &y[i]);
    }

    int prev_t = 0;
    int prev_x = 0;
    int prev_y = 0;

    for(int i = 0; i < N; i++){
        int mov = abs(x[i] - prev_x) + abs(y[i] - prev_y);
        int time = t[i] - prev_t;

        if((mov > time) || (time - mov) % 2 != 0){
            printf("No\n");
            return 0;
        }

        prev_x = x[i];
        prev_y = y[i];
        prev_t = t[i];
    }

    printf("Yes\n");

    return 0;
}