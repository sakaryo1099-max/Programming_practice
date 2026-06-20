//整数a,b,cと，文字列sが与えられる．a+b+cの計算結果と，文字列sを並べて表示しろ．
//制約 1 <= a,b,c <= 1000,  1<= |s| <= 100

#include <stdio.h>

int main(){
    int a, b, c;
    char s[101];

    scanf("%d", &a);
    scanf("%d %d", &b,&c);
    scanf("%s", &s);

    printf("%d %s\n", a+b+c, s);
    return 0;
}