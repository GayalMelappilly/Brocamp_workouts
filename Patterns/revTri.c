#include<stdio.h>
int main(){

    int i,j,limit;

    printf("ENTER THE LIMIT : ");
    scanf("%d",&limit);

    for(i=0;i<limit;i++){
        for(j=0;j<=i;j++){
            printf("%d",--i);
        }
        printf("\n");
    }

}