#include <stdio.h>

int calc(int n){
    int res = 0;
    while(n > 0){
        res += n % 10;
        n /= 10;
    }
    return res;
}

int main(){
    int N, A, B;

    scanf("%d %d %d", &N, &A, &B);

    int res = 0;
    for(int n = 1; n <= N; n++){
        int sum = calc(n);
        if(sum >= A && sum <= B){
            res += n;
        }
    }

    printf("%d", res);
}



// int sum = 1234;
// int i;
// unsigned char suuti[4];
// for(i = 0; i < 4; i++){
// suuti[i] = num % 10;
// num = num / 10;
// if(num == 0) break;
// }