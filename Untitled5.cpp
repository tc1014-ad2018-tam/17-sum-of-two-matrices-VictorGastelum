/*
   This program will reads two matrices of n x n elements each.  
   And also produce a third matrix with the sum of both matrices.
   
   Author:Victor Manuel Gastelum Huitzil
   Email: A01411985@itesm.mx
   Date: 15/10/2018
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int x;
    
    // Ask for the size array
    printf("Define the size of the array: ");
    scanf("%i", &x);

    // Limit the size of the array
    if(x>1&&x<=10){
        int a[x][x];
        int b[x][x];
        int c[x][x];
        
        // Ask the user for the array "a"
        printf("\nGive me the numbers of the array 'a' \n");
        
        // Ask for the numbers of each row and columns
        for(int i=0; i<x ;i++){
            for(int z=0; z<x ; z++){
                printf("Give me the number of row [%d] colum [%d]:", i,z);
                scanf("%d",&a[i][z]);
            }
        }

        printf("\nGive me the numbers of the array 'b'\n");
         
        // Ask for the numbers of each row and columns
        for(int i=0; i<x ;i++){
            for(int z=0; z<x ;z++){
                printf("Give me the number of row [%d] colum [%d]:", i,z);
                scanf("%d",&b[i][z]);
            }
        }
        
        system("cls");

        printf("The matrix 'a' that you have made is: \n");
        
        for(int i=0; i<x ;i++){
            for(int z=0; z<x ;z++){
                printf("%d ", a[i][z]);
            }
            printf("\n");
        }

        printf("\nThe array 'b' that you have made is: \n"); 

        for(int i=0; i<x ;i++){
            for(int j=0; j<x ;j++){
                printf("%d ", b[i][j]);
            }
            printf("\n");
        }

        // Loop "for" to calculate the third array
        for(int i=0; i<x ;i++){
            for(int z=0; z<x ; z++){
                c[i][z]=a[i][z]+b[i][z];
            }
        }
        
        // Print the array of "c"
        printf("\nThe sum of the array 'c' is: \n"); 
        for(int i=0; i<x ;i++){
            for(int z=0;z<x;z++){
                printf("%d ", c[i][z]);
            }
            printf("\n");
        }
    } else {
        printf("\nThat's not a integer value or the array size it's too big");
    }
return 0;
}
