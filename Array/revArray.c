#include<stdio.h>
int main(){
	int limit, arr[100], i, temp, mid;

	printf("ENTER THE LIMIT : ");
	scanf("%d",&limit);

	mid = limit/2;

    printf("ENTER THE ELEMENTS : ");
    for(i=0;i<limit;i++){
        scanf("%d",&arr[i]);
    }

    for(i=0;i<limit;i++){
        printf("%d ",arr[i]);
    }

    printf("\n");

	for(i=0;i<limit;i++){
		if(i == mid){
			break;
		}
		temp = arr[i];
		arr[i] = arr[limit-i-1];
		arr[limit-i-1] = temp;
	}

	for(i=0;i<limit;i++){
		printf("%d ",arr[i]);
	}
}