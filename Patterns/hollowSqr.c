#include<stdio.h>
int main(){
	int i,j,limit;
	printf("LIMIT : ");
	scanf("%d",&limit);

	for(i=0;i<limit;i++){

		printf("*");

		for(j=0;j<i;j++){
			printf(" ");
		}

		if(i!=0){
			printf("* ");
		}
		
		for(j=0;j<limit-i;j++){
			if(i==0){
				printf(" * ");
			}else{
				printf("  ");
			}
		}

		if(i!=0){
			printf("*");
		}

		for(j=0;j<i;j++){
			printf(" ");
		}

		printf("*");

        printf("\n");
		
	}
}