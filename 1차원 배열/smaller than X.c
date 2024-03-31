#include <stdio.h>

int main(){
    int n,X;
    scanf("%d %d",&n,&X);
    int k[n];

    for(int i=0;i<n;i++){
        scanf("%d ",&k[i]);
    } 

    for(int i=0;i<n;i++){
        if(k[i]<X){
            printf("%d ",k[i]);
        }
    } 


}