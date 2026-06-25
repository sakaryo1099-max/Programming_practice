#include <stdio.h>
#include <stdlib.h>

int compare(const void *x, const void *y){
    int a = *(const int *)x;
    int b = *(const int *)y;

    return b - a;
}

int main(){
    int n; //お餅の枚数
    int count = 0; //要素のカウント変数

    scanf("%d", &n);

    int *a = malloc(sizeof(int) * n);

    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    qsort(a, n, sizeof(int), compare);

    if(n > 0){
        count = 1;
        for(int i = 1; i < n; i++){
            if(a[i] != a[i - 1]){
                count++;
            }
        }
    }

    printf("%d", count);

    free(a);

    return 0;
}