#include <stdio.h>

int main(void){
    int n; 
    int t[101]; //'\0'分追加．
    int v[101];

    scanf("%d", &n);

    int water = 0;
    int prev_time = 0;

    for(int i = 0; i < n; i++){
        scanf("%d %d", &t[i], &v[i]);
        
        water -= t[i] - prev_time;

        // waterが0になったときにリセット
        if(water < 0){
            water = 0;
        }

        water += v[i];
        prev_time = t[i];
    }

    printf("%d\n", water);
    
    return 0;
}