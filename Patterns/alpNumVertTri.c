#include<stdio.h>
int main(){
	int limit,i,j,count=1;
	char alp='A';

	printf("ENTER THE LIMIT : ");
	scanf("%d",&limit);

	for(i=0;i<limit;i++){
		for(j=0;j<=i;j++){
			if(i%2 == 0){
				printf("%c",alp);
			}else{
				printf("%d",count);
			}
		}
        if(i%2 == 0){
            alp++;
        }else{
            count++;
        }
		printf("\n");
	}
}