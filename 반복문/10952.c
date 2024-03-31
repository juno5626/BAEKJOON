#include <stdio.h>

int main(){
    int b,c;
    int j = 1;
    scanf("%d %d",&b, &c);

    while(j){
        printf("%d\n",b+c);
        scanf("%d %d",&b, &c);

        if(b==0 && c==0){
            j=0;
        }

    }
}