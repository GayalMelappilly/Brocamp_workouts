#include<stdio.h>
int main(){
	
	int i,j,limit;

	printf("ENTER THE LIMIT : ");
	scanf("%d",&limit);

	for(i=0;i<limit;i++){
		for(j=1;j<=5;j++){
			if(j>i){
				printf("%d",&j);
			}else{
				printf("1");
			}
		}
		printf("\n");
	}
	
}