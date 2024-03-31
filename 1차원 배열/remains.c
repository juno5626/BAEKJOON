#include <stdio.h>

int main(){
    int a[10],remain[10];
    int count=0;

    for(int i = 0 ; i<10 ; i++){
        scanf("%d",&a[i]);
        remain[i] = a[i]%42;
        count++;
        for(int j = 0 ; j<i ; j++){
            if(remain[i]==remain[j]){
                count--;
                break;
            }
        }
    }

    printf("%d",count);
}