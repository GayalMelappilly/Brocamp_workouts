// * * * * * * * * * * * * * * * * *
//   * * * * * * *   * * * * * * *
//     * * * * *       * * * * *
//       * * *           * * *
//         * * * * * * * * *
//           * * * * * * *
//             * * * * *
//               * * *
//                 *
//

#include<stdio.h>
int main(){
    int limit, i, j, mid, l, r, count=0;

    printf("ENTER THE LIMIT : ");
    scanf("%d",&limit);

    for(i=0;i<limit;i++){

        for(j=0;j<i;j++){
            printf("  ");
        }

        for(j=0;j<(limit-i)*2-1;j++){
            mid = (limit-i)-1;
            r = mid;
            l = mid;
             if(i==0){
                printf("* ");
             }else if(i==1){
                if(j == mid){
                    printf("  ");
                }else{
                    printf("* ");
                }
             }else{
                if(i<limit/2){
                    r = r + count - 1;
                    l = l - count + 1;
                    if(j>=l && j<=r){
                        printf("  ");
                    }else{
                        printf("* ");
                    }
                }else{
                    printf("* ");
                }
             }
        }
        count++;
        printf("\n");
    }
}

