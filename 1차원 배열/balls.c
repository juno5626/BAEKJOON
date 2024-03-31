#include <stdio.h>

int main(){
    int N, M;
    int i , j , num;
    scanf("%d %d",&N, &M);
    int a[N];
    for(int w = 0 ; w<N ; w++){
        a[w] = 0;
    }
    for(int q = 0 ; q<M ;q++){
        scanf("%d %d %d",&i, &j,&num);

        for(int o = i-1 ; o<=j-1 ;o++){
            a[o]=num;
        }     
        
    }
    for(int w = 0 ; w<N ; w++){
        printf("%d ",a[w]);
    }

}