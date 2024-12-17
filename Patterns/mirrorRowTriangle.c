        // 5 4 3 2 1 2 3 4 5
        // 4 3 2 1 2 3 4
        // 3 2 1 2 3
        // 2 1 2
        // 1 

#include<stdio.h>
int main(){
	int i,j,limit,num,rowLen,flag=0;
	
	printf("ENTER THE LIMIT : ");
	scanf("%d",&limit);

	rowLen = (limit*2)-1;

	num = limit;

	for(i=0;i<limit;i++){
		flag = 0;
		for(j=0;j<rowLen;j++){
			printf("%d ",num);
			
			if(num == 1){
				flag = 1;
			}

			if(flag == 1){
				num++;
			}else{
				num--;
			}
		}

		printf("\n");
		rowLen = rowLen - 2;
        num = limit-i-1;		
	}
}