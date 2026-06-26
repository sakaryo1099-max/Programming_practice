#include <stdio.h>

int main(void){
    int n;

    static int a[100001];

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }


    int ans = 0;

    for(int i = 0; i < n; i++){
        int count = 0;
        int already = 0;

        for(int k = 0; k < i; k++){
            if(a[k] == a[i]){
                already = 1;
            }
        }

        if(already){
            continue;
        }
        
        for(int j = 0; j < n; j++){
            if(a[i] == a[j]){
                count++;
            }
        }
        if((count % 2) != 0){
            ans++;
        }
    }

    printf("%d\n", ans);

    return 0;
}