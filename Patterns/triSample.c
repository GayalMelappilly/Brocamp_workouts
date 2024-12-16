#include<stdio.h>
int main(){
	int i,j,limit,num=1,count=1;

	printf("ENTER THE LIMIT : ");
	scanf("%d",&limit);

	for(i=0;i<limit;i++){
		for(j=0;j<limit-i;j++){
			printf(" ");
		}

		num = i;
	
		for(j=0;j<count;j++){
            if(i==0){
                num = 1;
            }else{
			    j>i ? num-- : num++;
            }
			printf("%d",num);
		}

		count+=2;

		printf("\n");
	}
}