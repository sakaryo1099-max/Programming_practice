#include <stdio.h>

int main(){
    int n;
    int i, j, flag = 0, count = 0;
    int a[210];

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    while(flag == 0){
        for(i = 0; i < n; i++){
            if(a[i] % 2 != 0){
                flag = 1;
                break;
            }
        }

        if(flag == 1){
            break;
        }

        for(i =0; i < n; i++){
            a[i] /= 2;
        }
        
        count++;
    }

    printf("%d\n", count);

    return 0;
}