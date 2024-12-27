#include<stdio.h>
int main(){
	int limit,i,j;
	
	printf("ENTER THE LIMIT : ");
	scanf("%d",&limit);
		
	for(i=1;i<=limit*2;i++){
		for(j=1;j<=limit*2;j++){
            if(i==limit*2){
                break;
            }
			if(j == i || j == limit*2-i){
				printf("* ");
			}else{
				printf(" ");
			}
		}
        printf("\n");
	}
}