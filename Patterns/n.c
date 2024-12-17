#include<stdio.h>
// int main(){

//     int i,j,limit,count=-1,rev=-3;

//     printf("ENTER THE LIMIT : ");
//     scanf("%d", &limit);

//     for(i=0;i<limit;i++){
//         rev = rev+2;
//     }

//     for(i=0;i<limit;i++){
//         printf("*");

//         for(j=0;j<count;j++){
//             printf(" ");
//         }
//         if(i>0){
//             printf("*");
//         }

//         for(j=0;j<rev;j++){
//             printf(" ");
//         }

//         if(i<limit-1){
//             printf("*");
//         }

//         printf("\n");
//         count = count + 2;
//         rev = rev - 2;
//     }
    
// }
int main() {
    int rows = 5; // Total number of rows
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows; j++) {
            // Print '*' only at the edges or diagonals
            if (j == 0 || j == rows - 1 || i == j) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}