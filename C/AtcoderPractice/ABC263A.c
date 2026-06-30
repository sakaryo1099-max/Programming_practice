#include <stdio.h>
#include <stdlib.h>

int comp(const void *x, const void *y){
    return *(const int *)y - *(const int *)x; 
}

int main(void){
    int card[5];

    for(int i = 0; i < 5; i++){
        scanf("%d", &card[i]);
    }

    qsort(card, 5, sizeof(int), comp);

    if(card[0] == card[1] && card[1] == card[2] && card[3] == card[4]){
        printf("Yes\n");
    }else if(card[0] == card[1] && card[2] == card[3] && card[3] == card[4]){
        printf("Yes\n");
    }else{
        printf("No\n");
    }

    return 0;
}