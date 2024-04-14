#include <stdio.h>
#include <string.h>

int main(){
    char str[1000001];
    int count=0;
    int len;

    fgets(str,1000001,stdin);
    str[strlen(str)-1] = '\0';
    len = strlen(str);
    printf("%d",len);


    if(strlen(str)==1){
        if(str[0]!=' '){
            count++;
        }

        printf("%d",count);
        return 0;
    }
    for(int i = 1 ; i<strlen(str)-2;i++){

        if(str[i]==' '){
            count++;
        }
    }
    count++;

    printf("%d",count);
    return 0;
}