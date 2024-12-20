#include<stdio.h>
int main(){
	int i,j,limit,flag=0;

	printf("ENTER THE LIMIT : ");
	scanf("%d",&limit);

	for(i=0;i<limit;i++){
		for(j=0;j<=i;j++){
			printf("%d",flag);
			if(flag==0){
				flag = 1;
			}else{
				flag = 0;
			}
		}
		for(j=0;j<limit-i;j++){
			printf("  ");
		}
		flag = 0;
		for(j=0;j<=i;j++){
			printf("%d",flag);
			if(flag==0){
				flag = 1;
			}else{
				flag = 0;
			}
		}
		printf("\n");
	}
}