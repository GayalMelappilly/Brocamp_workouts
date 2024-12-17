    // $   $
    //  $ $
    //   $ 
    //  $ $
    // $   $

#include<stdio.h>
int main(){
	int i,j,limit;

    printf("ENTER THE LIMIT : ");
    scanf("%d",&limit);

	for(i=0;i<limit/2+1;i++){
		for(j=0;j<i;j++){
			printf(" ");
		}
		printf("$ ");

		for(j=0;j<(limit/2)-i-1;j++){
			printf("  ");
		}
        if(i!=limit/2){
		    printf("$");
        }
		printf("\n");
	}

	for(i=0;i<limit/2;i++){
		for(j=0;j<(limit/2-1)-i;j++){
			printf(" ");
		}
		printf("$ ");

		for(j=0;j<i;j++){
			printf("  ");
		}
		printf("$");
		printf("\n");
	}

}