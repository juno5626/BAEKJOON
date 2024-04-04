#include <stdio.h>
#include <stdlib.h>


int main(){
    int a;
    int total = 0; 
    scanf("%d",&a);

    char num[100];
    char one;

    

    scanf("%s",num);

    for(int i = 0 ; i<a ; i++){
        one = num[i];
        total = total + atoi(&one);
        printf("%d",atoi(&one));
    }

    printf("%d",total);
}