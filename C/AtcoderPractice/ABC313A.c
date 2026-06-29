#include <stdio.h>
#include <stdlib.h>

int comp(const void *x, const void *y){
    return *(int *)y - *(int *)x;
}

int main(void){
   int n;
   int p[101];
   
   scanf("%d", &n);

   for(int i = 0; i < n; i++){
    scanf("%d", &p[i]);
   }

   int max_other = 0;

   for(int i = 1; i < n; i++){
    if(p[i] > max_other){
        max_other = p[i];
    }
   }

   if(p[0] > max_other){
    printf("0\n");
   }else{
    printf("%d\n", max_other + 1 - p[0]);
   }
   
   return 0;
}