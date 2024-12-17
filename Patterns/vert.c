        //   1 6 10 13 15
        //   2 7 11 14
        //   3 8 12
        //   4 9
        //   5


#include<stdio.h>
int main(){
	int i,j,limit,num,count;
		
	printf("ENTER THE LIMIT : ");
	scanf("%d",&limit);

	count = limit;
    num = 1;

	for(i=0;i<limit;i++){
		for(j=0;j<limit-i;j++){
			printf("%d ",num);
			num = count+num;
			count--;
		}
		printf("\n");
		count = limit;
		num = i+2;
	}
}