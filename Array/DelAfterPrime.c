#include<stdio.h>
int main(){
	int arr[100];
	int limit,i,j,flag = 0,count=0;

	printf("ENTER THE LIMIT : ");
	scanf("%d",&limit);
		
	printf("ENTER THE ELEMENTS : ");
	for(i=0;i<limit;i++){
		scanf("%d",&arr[i]);
	}

	printf("ARRAY : ");
	for(i=0;i<limit;i++){
		printf("%d ",arr[i]);
	}

	for(i=0;i<limit;i++){
		flag = 0;
        if(arr[i]==1){
            flag = 1;
        }
		for(j=2;j<arr[i];j++){
			if(arr[i]%j==0){
				flag = 1;
			}
		}
		if(flag == 0 && arr[i] != 0){
			for(j=i+1;j<limit;j++){
				arr[j] = arr[j+2];
			}
		    printf("REACHED : %d %d ", arr[i],count);
		    count ++;
		}
	}

	printf("\nARRAY AFTER DELETION : ");
	for(i=0;i<count;i++){
		printf("%d ",arr[i]);
	}
	
}