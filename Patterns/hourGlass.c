// 1 1 1 1 1 1 1 
//   2 2 2 2 2  
//     3 3 3  
//       4
//     3 3 3  
//   2 2 2 2 2  
// 1 1 1 1 1 1 1

#include<stdio.h>
int main(){
	int i,j,limit,leng,count,num,flag=0,p;

	printf("ENTER THE LIMIT : ");
	scanf("%d",&limit);

	leng = (limit*2) - 1;
	count = 1; 
	num = 1;
    p = limit;

    for(i=0;i<limit-1;i++){
        count = count + 2;
    }


	for(i=0;i<leng;i++){
		for(j=0;j<limit-p;j++){
			printf("  ");
		}
		for(j=0;j<count;j++){
			printf("%d ",num);
		}
		if(num == limit){
			flag = 1;
		}
		if(flag == 1){
			num--;
            count = count + 2;
            p++;
		}else{
			num++;
            count = count - 2;
            p--;
		}
        printf("\n");
	}
}