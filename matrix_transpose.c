#include <stdio.h>

int main(){
    printf("Enter the dimensions of the matrix: ");
    int y, x;
    scanf("%d %d", &y, &x);

    printf("Enter the elements of the matrix:\n");
    int matrix1[y][x];
    for(int i=0; i<y; i++){
        for(int j=0; j<x; j++){
            scanf("%d", &matrix1[i][j]);
        }
    }

    int matrix2[x][y];

    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            matrix2[i][j]=matrix1[j][i];
        }
    }

    printf("Resulting matrix:\n");
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            printf("%d ", matrix2[i][j]);
        } printf("\n");
    } return 0;
}