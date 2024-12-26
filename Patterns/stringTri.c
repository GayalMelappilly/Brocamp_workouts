#include<stdio.h>
#include<string.h>
int main(){
	int limit,i,j;
    char str[100];

	printf("ENTER THE STRING : ");
	gets(str);
	
	limit = strlen(str);

	for(i=0;i<limit;i++){
		for(j=0;j<=i;j++){
			printf("%c",str[j]);
		}
		printf("\n");
	}	

}