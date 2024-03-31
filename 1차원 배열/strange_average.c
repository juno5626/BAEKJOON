#include <stdio.h>

int main(){
    int N ,max;
    scanf("%d",&N);
    int a[N];
    float sum =0;
    float avg;
    for(int i = 0 ;i<N;i++){
        scanf("%d",&a[i]);
        if(i ==0){
            max =a[i];
        }

        if(max<a[i]){
            max = a[i];
        }
    }

    for(int i = 0;i<N;i++){
        sum = sum + a[i]*1.0/max*100;
    }

    avg = sum/N;
    printf("%f",avg);
}