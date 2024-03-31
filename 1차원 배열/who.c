#include <stdio.h>

int main(){
    int a[30] ={0};
    int k;
    for(int i = 0 ; i <30 ; i++){
        scanf("%d",&k);
        a[k-1] = 1;
    }

    for(int i = 0 ; i <30 ; i++){
        if(a[i]==0){
            printf("%d\n",i+1);
        }
    }
    
}