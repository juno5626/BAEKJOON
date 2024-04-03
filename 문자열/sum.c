#include <stdio.h>
#include <stdlib.h>


int main(){
    int a;
    int total = 0; 
    scanf("%d",&a);

    char num[a];
    char one;

    scanf("%s",num);

    for(int i = 0 ; i<a ; i++){
        one = num[i];
        total = total + atoi(&one);
    }

    printf("%d",total);
}