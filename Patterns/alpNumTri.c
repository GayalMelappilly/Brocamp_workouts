#include<stdio.h>
int main(){
	int limit,num,i,j;
	char alp;

	printf("ENTER THE LIMIT : ");
	scanf("%d",&limit);

	for(i=1;i<=limit;i++){
	    num = 1;
	    alp = 'A';
		for(j=1;j<=i;j++){
			if(j%2 == 0){
				printf("%d",num);
			}else{
				printf("%c",alp);
			}
			num++;
			alp++;		
		}
	printf("\n");
	}
}