#include<stdio.h>
int main(){
	int arr[100],i,j,limit;

	printf("ENTER THE LIMIT : ");
	scanf("%d",&limit);

	printf("ENTER THE ELEMENTS : ");
	for(i=0;i<limit;i++){
		scanf("%d",&arr[i]);
	}

	printf("ARRAY : ");
	for(i=0;i<limit;i++){
		printf("%d \t",arr[i]);
	}
	
	for(i=0;i<limit;i++){
		if(arr[i]%2 != 0){
			for(j=i+1;j<limit;j++){
				arr[j] = arr[j+2];
			}
		}
	}

	printf("\nAFTER : ");
	for(i=0;i<limit;i++){
		printf("%d \t",arr[i]);
	}
	
}