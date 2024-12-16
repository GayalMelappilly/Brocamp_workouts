#include<stdio.h>
int main(){
    int i,j,limit,count;

    printf("LIMIT : ");
    scanf("%d",&limit);

    count = limit;

    for(i=0;i<limit;i++){
        count = count - 2;
        for(j=1;j<count;j++){
            printf("* ");
        }
        if(count > 2){
            printf("\n");
            printf("* *");
            printf("\n");
        }
    }
}