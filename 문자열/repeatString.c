#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int t, r;
    int count=0;
    char s[21];
    char a[80];
    scanf("%d",&t);
    char* p[1000];


    for(int i = 0 ; i < t ; i++){
        scanf("%d",&r);
        scanf("%s",s);
        
        p[i]=(char*)malloc(strlen(s)*8);


        for(int o = 0 ; o < strlen(s) ;o++){
            for(int k = 0 ; k < r ; k++){
                p[i][count] = s[o];
                count++;
            }
        }
        count=0;
    }

    for(int i = 0 ; i<t ; i++){
        printf("%s\n",p[i]);
    }


    return 0;
}