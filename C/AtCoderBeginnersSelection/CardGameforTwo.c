#include <stdio.h>
#include <stdlib.h>

//int arrayMax(int *a, int n)
//{
//    int max = 0;
//    for(int i = 0; i < n; i++){
//        if(max < a[i]){
//            max = a[i];
//        }
//    }
//
//    return max;
//}


//qsortのためのcompare関数
int compare(const void *x, const void *y){
    int a = *(const int *)x;
    int b = *(const int *)y;

    return b - a; //この部分を変えることにより様々なパターンにできる．
}



int main(){
    int n; //カードの枚数
    int Alice = 0;
    int Bob = 0;

    scanf("%d", &n);

    int *a = malloc(sizeof(int) * n);

    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    qsort(a, n, sizeof(int), compare);

    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            Alice += a[i];
        }
        else{
            Bob += a[i];
        }
    }

    printf("%d", Alice - Bob);

    free(a); //malloc関数を使った際はfreeでメモリ解放を忘れずに
    return 0;
}