#include <stdio.h>

#define NUMBER 5

int main(void){
    int tensu[NUMBER]; //学生の点数
    int max, min;

    printf("%d人の点数を入力せよ\n", NUMBER);
    for(int i = 0; i < NUMBER; i++){
        printf("%2d番:", i + 1);
        scanf("%d", &tensu[i]);
    }

    min = max = tensu[0];

    for(int i = 1; i < NUMBER; i++){
        if(tensu[i] > max) max = tensu[i];
        if(tensu[i] < min) min = tensu[i];
    }

    printf("最高点:%d\n", max);
    printf("最低点:%d\n", min);

    return 0;
}