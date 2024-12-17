    // * * * * * * * * * * * * * * * * *
    //   * * * * * * *   * * * * * * *
    //     * * * * *       * * * * *
    //       * * *           * * *
    //         * * * * * * * * *
    //           * * * * * * *
    //             * * * * *
    //               * * *
    //                 *

#include<stdio.h>
int main(){
	int i,j,limit,count, mid, rep;
	printf("ENTER THE LIMIT : ");
	scanf("%d",&limit);

	count = limit*2-1;
	mid = count/2+1;
    rep = -1;

	for(i=0;i<limit;i++){
        for(j=0;j<i;j++){
            printf("  ");
        }
		for(j=0;j<count;j++){
			if(i!=0 && i<limit/2){
                if(j>=mid-rep && j<=mid+rep){
				    printf("  ");
			    }else{
				    printf("* ");
			    }
            }else{
                printf("* ");
            }
		}
		printf("\n");
		count = count - 2;
		mid = count / 2;
        rep++;
	}
}