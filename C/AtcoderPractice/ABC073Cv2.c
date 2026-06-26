#include <stdio.h>
#include <stdlib.h>

int cmp(const void *x, const void *y){
    return *(int *)x - *(int *)y;
}

int main(void){
    int n;

    static int a[100001];

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    qsort(a, n, sizeof(int), cmp);

    int i = 0;
    int ans = 0;

    while(i < n){
        int count = 1;

        while(i + 1 < n && a[i] == a[i + 1]){
            count++;
            i++;
        }

        if((count % 2) != 0){
            ans++;
        }

        i++;
    }

    printf("%d\n", ans);

    return 0;
}