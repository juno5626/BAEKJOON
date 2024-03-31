#include <stdio.h>

int main(){
    int a[9];
    int index,max=0;
    for(int i = 0; i<9 ;i++){
        scanf("%d",&a[i]);
        if(max<a[i]){
            max=a[i];
            index = i;
        }
    }
    printf("%d\n%d",a[index],index+1);
}