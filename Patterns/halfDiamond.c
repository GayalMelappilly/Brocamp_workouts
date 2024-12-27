#include<stdio.h>
int main(){
	int limit,i,k,count;
	
	printf("ENTER THE LIMIT : ");
	scanf("%d",&limit);

	for(i=0;i<limit*2-1;i++){
		if(i>=limit){
			count--;
		}else{
			count++;
		}
		for(k=0;k<count;k++){
			printf("* ");
		}
		printf("\n");
	}
}