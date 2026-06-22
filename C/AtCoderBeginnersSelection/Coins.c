#include <stdio.h>

int main(){
    int a, b, c;
    int x;
    int res = 0;

    scanf("%d", &a);

    scanf("%d", &b);

    scanf("%d", &c);

    scanf("%d", &x);

    for(int A = 0; A <= a; A++){
        for(int B = 0; B <= b; B++){
            for(int C = 0; C <= c; C++){
                int total = 500*A + 100*B + 50*C;
                if(total == x) res++;
            }
        }
    }

    printf("%d\n", res);
}