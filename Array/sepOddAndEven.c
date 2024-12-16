#include<stdio.h>
int main(){
    int even[100], arr[100], odd[100], i, limit, eLen=0, oLen=0;

    printf("ENTER THE LIMIT : ");
    scanf("%d", &limit);


    printf("ELEMENTS : ");

    for(i=0;i<limit;i++){
        scanf("%d",&arr[i]);
    }

    i=0;

    while(i<limit){
        printf("%d ",arr[i]);
        if(arr[i]%2==0){
            even[eLen] = arr[i];
            eLen++;
        }else{
            odd[oLen] = arr[i];
            oLen++;
        }
        i++;
    }

    printf(" ODD : ");

    for(i=0;i<oLen;i++){
        printf("%d ",odd[i]);
    }

    printf(" EVEN : ");

    for(i=0;i<eLen;i++){
        printf("%d ",even[i]);
    }

}