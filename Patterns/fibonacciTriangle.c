//         0        
//       1   1      
//     2   3   5    
//   8   13   21   34
// 55   89   144   233   377

#include<stdio.h>
int main(){
	int i,j,limit,num1=1, num2=0, num=0;
	
	printf("ENTER THE LIMIT : ");
	scanf("%d",&limit);

	for(i=0;i<limit;i++){
		for(j=0;j<limit-i;j++){
			printf("  ");
		}
		for(j=0;j<=i;j++){

			num = num1+num2;
			num1 = num2;
			num2 = num;

			if(i==0){
				num = 0;
			}
		
			if(i==1){
				num = 1;
                num2 = 1;
			}

			printf("%d   ",num);
		}
		printf("\n");
	}
}