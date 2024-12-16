#include<stdio.h>
int main(){
    int i, j, limit;

    printf("ENTER THE LIMIT : ");
    scanf("%d",&limit);

    for(i=1;i<=limit;i++){

        for(j=1;j<=i;j++){
            printf("%d ", j);
        }
        for(j=limit-i;j>0;j--){
            printf("* ");
        }

        for(j=limit-i;j>0;j--){
            printf("* ");
        }
        for(j=i;j>=1;j--){
            printf("%d ", j);
        }

        printf("\n");
    }
}