#include <stdio.h>

int main(){
    int a;

    scanf("%d",&a);

    for(int i =0;i<a;i++){
        for(int k = 0; k<a;k++){
            if(k<a-1-i){
                printf(" ");
            }else{
                printf("*");
            }
        }
        printf("\n");
    }
}