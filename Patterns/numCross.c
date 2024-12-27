#include<stdio.h>
int main(){
	int limit,i,j,count=0;
	
	printf("ENTER THE LIMIT : ");
	scanf("%d", &limit);

	for(i=1;i<limit*2;i++){
        if(i>limit)
			--count;
		else
			count++;
		for(j=1;j<limit*2;j++){
			if(j==i || j == limit*2-i){
				printf("%d",count);
            }else{
			    printf(" ");
            }
		}
		printf("\n");
	}
}