#include<stdio.h>
int main(){
	int limit,i,j,col=2,row=1,k,l;
	
	printf("ENTER THE LIMIT : ");
	scanf("%d",&limit);

	for(i=0;i<limit;i++){
		for(k=0;k<row;k++){
			printf("* \n");
		}
		for(l=0;l<col;l++){
			printf("* ");
		}
		printf("\n");
		col += 2;
		row += 2;
	}
}