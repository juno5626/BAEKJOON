#include <stdio.h>

int main(){
    int n,v,c=0;;
    scanf("%d",&n);
    int k[n];

    for(int i=0;i<n;i++){
        scanf("%d ",&k[i]);
    } 
    scanf("%d ",&v);

    for(int i=0;i<n;i++){
        if(v==k[i]){
            c++;
        }
    }
    printf("%d",c);
}