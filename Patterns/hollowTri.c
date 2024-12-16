#include<stdio.h>
int main(){
	int i,j,limit,midSpace=1;

	printf("ENTER THE LIMIT : ");
	scanf("%d",&limit);

	for(i=0;i<limit;i++){
	
		for(j=i;j<limit;j++){
			printf(" ");
		}

		printf("*");
		
		for(j=0;j<midSpace-2;j++){
			if(i==limit-1){
				printf("*");
			}else{
				printf(" ");
			}
		}

		if(i!=0){
			printf("*");
		}

		printf("\n");
        midSpace += 2;	
		
	}
}
