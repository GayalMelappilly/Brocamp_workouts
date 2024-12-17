    // *
    //   * *
    //     * * *
    //       * * * *
    //     * * *
    //   * *
    // *


#include<stdio.h>
int main(){
	int i,j,limit;
		
	printf("ENTER THE LIMIT : ");
	scanf("%d",&limit);

	for(i=0;i<limit;i++){
		for(j=0;j<i;j++){
			printf("  ");
		}
		for(j=0;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
		
	for(i=0;i<limit-1;i++){
		for(j=0;j<limit-i-2;j++){
			printf("  ");
		}
		for(j=0;j<limit-i-1;j++){
			printf("* ");
		}
		printf("\n");
	}
}