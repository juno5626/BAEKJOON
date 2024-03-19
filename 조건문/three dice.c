#include <stdio.h>

int main(){
    int di1,di2,di3;
    
    scanf("%d %d %d",&di1,&di2,&di3);

    if(di1 == di2 && di2 == di3){
        printf("%d",10000+di1*1000);
    }else if(di1 != di2 && di2 != di3){
        if(di1>di2){
            if(di1>di3){
                printf("%d",100*di1);
            }else{
                printf("%d",100*di3);
            }
        }else{
            if(di2>di3){
                printf("%d",100*di2);
            }else{
                printf("%d",100*di3);
            }
        }
    }else{
        if(di1==di2||di1==di3){
            printf("%d",1000+di1*100);
        }else{
            printf("%d",1000+di2*100);
        }
    }

    
}