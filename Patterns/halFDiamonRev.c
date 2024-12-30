//        *
//      * *
//    * * *
//  * * * *
//    * * *
//      * *
//        * 

#include<stdio.h>
int main(){
    int limit,i,j;
    
    printf("ENTER THE LIMIT : ");
    scanf("%d",&limit);

    for(i=0;i<limit*2;i++){
        for(j=0;j<limit;j++){
            if((j>=limit-i && i<=limit) || (j>=i-limit && i>limit)){
                printf(" *");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
}