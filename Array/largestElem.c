#include<stdio.h>
int main(){
    int arr[100], i, limit, lar;

    scanf("%d",&limit);

    for(i=0;i<limit; i++){
        scanf("%d",&arr[i]);
    }

    lar = arr[0];

    for(i=1; i<limit;i++){
        if(lar<arr[i]){
            lar = arr[i];
        }
    }

    printf("%d",lar);
}