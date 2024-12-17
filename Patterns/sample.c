// 1A2B3C4D5E
// 1A2B3C4D
// 1A2B3C
// 1A2B
// 1A

#include<stdio.h>
int main(){

	int i,j,limit,num=1;
	char alp='A';

	printf("ENTER THE LIMIT : ");
	scanf("%d", &limit);

	for(i=0;i<limit;i++){
        num = 1;
        alp = 'A';
		for(j=0;j<limit-i;j++){
			printf("%d%c",num,alp);
			num++;
			alp++;
		}
		printf("\n");
	}

}
