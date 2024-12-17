// * * * * * * * * * * * * * * * * * * * * * * * * *
//   *           *   *           *   *           *
//     *       *       *       *       *       *
//       *   *           *   *           *   *
//         *               *               *
//       *   *           *   *           *   *
//     *       *       *       *       *       *
//   *           *   *           *   *           *
// * * * * * * * * * * * * * * * * * * * * * * * * *

#include<stdio.h>
int main(){
    int limit, i, j;

    printf("ENTER THE LIMIT : ");
    scanf("%d", &limit);

    for(i=0;i<limit;i++){
        for(j=0;j<i;j++){
            printf("  ");
        }
        printf("*");
        for(j=0;j<(limit*2)-i;j++){
            printf(" ");
        }
        printf("*");

        printf("\n");
    }
}