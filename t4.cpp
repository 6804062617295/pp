#include <stdio.h>

int main() {
    int a,b,i,j;
    scanf("%d%d",&a,&b);
    for(i=0; i<a; i++){
        if (i % 2 == 0){
            for(j=0; j<b; j++){
            printf("A");
        }
         for(j=0; j<b; j++){
            printf("B");
        }
        }else{
            for(j=0; j<b; j++){
            printf("B");
        }
         for(j=0; j<b; j++){
            printf("A");
        }
        }
        printf("\n");
    }
    return 0;
}