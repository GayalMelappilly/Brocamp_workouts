// * * 
// * 
// * 
// * 
// * * * * 
// * * * * 
// * 
// * 
// * 
// * * * * * * 
// * * * * * * 
// * * * * * *
// *
// *
// *
// * * * * * * * * 
// * * * * * * * *
// * * * * * * * *
// * * * * * * * *

#include<stdio.h>
int main(){
	int i,j,limit,p=2,count=1,flag=0;

	printf("ENTER THE LIMIT : ");
	scanf("%d",&limit);

	while(flag==0){
		for(i=0;i<count;i++){
			for(j=0;j<p;j++){
				printf("* ");
			}
		printf("\n");
		}
        p = p + 2;
        count++;
		if(count>limit){
			break;
		}
		for(i=0;i<3;i++){
			printf("*");
            printf("\n");
		}
	}
}