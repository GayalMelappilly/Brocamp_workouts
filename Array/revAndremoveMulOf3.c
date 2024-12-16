#include<stdio.h>
int main(){
    int a[100], b[100], limit, i, count=0;

    printf("LIMIT : ");
    scanf("%d",&limit);

    printf("ELEMENTS : ");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }

    for(i=limit-1;i>=0;i--){
        if(a[i]%3!=0){
            b[count] = a[i];
            count++;
        }
    }

    for(i=0;i<count;i++){
        printf("%d ",b[i]);
    }


}