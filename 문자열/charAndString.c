#include <stdio.h>

int main(){
    int a;
    char str[1000];

    scanf("%s",str);
    scanf("%d",&a);

    printf("%c",str[a-1]);
}