// 1                       1
//   2                   2  
//     3               3    
//       4           4      
//         5       5        
//       4           4      
//     3               3    
//   2                   2  
// 1                       1

#include<stdio.h>
int main(){
	int i,j,limit,spaces;

	printf("ENTER THE LIMIT : ");
	scanf("%d",&limit);

	spaces = 7;

	for(i=0;i<limit;i++){
		spaces = spaces + 4;
	}

	for(i=0;i<limit;i++){
		for(j=0;j<i;j++){
			printf("  ");
		}
		printf("%d",i+1);

		for(j=0;j<spaces;j++){
			printf(" ");
		}
		spaces = spaces - 4;
		printf("%d", i+1);
		printf("\n");
	}

	spaces = 7;

	for(i=limit;i>=0;i--){
		for(j=0;j<i;j++){
			printf("  ");
		}
		printf("%d",i+1);

		for(j=0;j<spaces;j++){
			printf(" ");
		}
		spaces = spaces + 4;
		printf("%d", i+1);
		printf("\n");
	}
}