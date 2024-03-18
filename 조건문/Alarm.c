#include <stdio.h>

int main(){
    int hour, min;

    scanf("%d %d",&hour, &min);

    min = min -45;

    if(min<0){
        hour--;
        min = min+60;
    }
    printf("%d %d",hour , min);
    
}