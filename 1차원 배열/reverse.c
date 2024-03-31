#include <stdio.h>

int main(){
    int N, M;
    int i , j;
    int ko;
    scanf("%d %d",&N, &M);
    int a[N];
    for(int w = 0 ; w<N ; w++){
        a[w] = w+1;
    }
    for(int q = 0 ; q<M ;q++){
        scanf("%d %d",&i, &j);
        for(int e = 0 ; e<(j-i+1)/2 ;e++){
            ko = a[i-1+e];
            a[i-1+e] = a[j-1-e];
            a[j-1-e] =ko ;
        }
    }
    for(int w = 0 ; w<N ; w++){
        printf("%d ",a[w]);
    }


}