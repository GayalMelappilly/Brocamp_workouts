//         1        
//       1   1      
//     1   2   1    
//   1   3   3   1  
// 1   4   6   4   1

#include<stdio.h>
int main(){
	int i,j,limit,prev[100],num=1,count=1;

	printf("ENTER THE LIMIT : ");
	scanf("%d",&limit);

	for(i=0;i<limit;i++){
		for(j=0;j<limit-i;j++){
			printf("  ");
		}

		for(j=0;j<=i;j++){
			if(j==0 || j==i){
				printf("1   ");
				prev[j]=1;
			}else{
				num = prev[j-1]+prev[j];
				prev[j]=num;
				if(j == (i/2)+1){
					num = prev[j-count];
					count = count + 2;
				}
				printf("%d   ",num);
			}
		}
		printf("\n");
	}
}
