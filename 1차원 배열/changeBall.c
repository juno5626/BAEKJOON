#include <stdio.h>

int main(){
    int N, M;
    int i , j , num;
    int ko;
    scanf("%d %d",&N, &M);
    int a[N];
    for(int w = 0 ; w<N ; w++){
        a[w] = w+1;
    }
    for(int q = 0 ; q<M ;q++){
        scanf("%d %d",&i, &j);
        ko = a[i-1];
        a[i-1] = a[j-1];
        a[j-1] = ko;
    }
    for(int w = 0 ; w<N ; w++){
        printf("%d ",a[w]);
    }

}