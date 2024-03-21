#include <stdio.h>

int main(){
    int total;
    int k;
    int price, t;
    int total1=0;
    scanf("%d",&total);
    scanf("%d",&k);

    for(int i = 0 ; i<k ;i++){
        scanf("%d %d",&price,&t);
        total1 = total1+ price*t;
    }

    if(total == total1){
        printf("Yes");
    }else{
        printf("No");
    }
}