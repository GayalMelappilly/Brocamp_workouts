#include<stdio.h>
int main(){
	int i, j, limit, l=1, r=1, arr[100];

	printf("ENTER THE LIMIT : ");
	scanf("%d",&limit);

    arr[0] = 1;
    arr[1] = 1;

	for(i=0;i<limit;i++){
		for(j=0;j<limit-i;j++){
			printf(" ");
		}
		for(j=0;j<=i;j++){
            if(j==i || j==0){
			    printf("1 ");
            }else{
                arr[j] = l+r;
			    printf("%d ",arr[j]+arr[j-1]-1);
                l = arr[j-1];
                r = arr[j];
            }
		}
        arr[i] = 1;
		printf("\n");
        // for(j=0;j<5;j++){
        //     printf("ARR = %d ",arr[j]);
        // }
	}
}