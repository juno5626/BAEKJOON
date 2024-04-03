#include <stdio.h>
#include <string.h>

int main(){
    char a[100];
    int index[26];
    scanf("%s",a);
    
    for(int i = 0 ; i <26 ; i++){
        index[i] = -1;
    }
    for(int i = 0 ; i <strlen(a) ; i++){
        for(int k = 0 ; k<26;k++){
            if(index[a[i]-97]==-1){
                index[a[i]-97]=i;

            }
        }
    }

    for(int k = 0 ; k<26;k++){
        
        printf("%d ",index[k]);
                
    }
}