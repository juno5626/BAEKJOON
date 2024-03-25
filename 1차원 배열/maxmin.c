#include <stdio.h>

int main(){
    int a,k;
    int max, min;

    scanf("%d",&a);

    scanf("%d",&max);
    min = max;
    for(int i = 1 ; i<a ;i++){
        scanf("%d",&k);
        if(max<k){
            max=k;
        }
        if(min>k){
            min = k;
        }
    }

    printf("%d %d",min,max);
}