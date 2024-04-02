#include <stdio.h>
#include <string.h>


int main(){
    int a;

    scanf("%d",&a);
    char str[a][1000];


    for(int i = 0 ; i < a ;i++){
        scanf("%s",str[i]);

    }

    for(int i = 0 ; i < a ;i++){
        printf("%c%c\n",str[i][0],str[i][strlen(str[i])-1]);
    }


}

