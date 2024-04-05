#include <stdio.h>

int main(){
    int a;
    int total = 0; 
    int k;
    scanf("%d",&a);

    char num[100];
    scanf("%s",&num);

    for(int i = 0 ; i<a ; i++){
        k = num[i] - 48;
        total = total + k;
        
    }

    printf("%d",total);
}