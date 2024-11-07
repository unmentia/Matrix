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

    printf("Enter the indexes: ");
    int inx1, inx2;
    scanf("%d %d", &inx1, &inx2);

    int matrix2[y-1][x-1];

    int y2 = 0;
    int x2 = 0;

    for(int i=0; i<y; i++){
        if(i==inx1)
        continue;
        x2 = 0;
        for(int j=0; j<x; j++){
            if(j==inx2){
                continue;
            } else {
                matrix2[y2][x2]=matrix1[i][j];
            } x2++;
        } y2++;
    }

    printf("Resulting matrix:\n");
    for(int i=0; i<y2; i++){
        for(int j=0; j<x2; j++){
            printf("%d ", matrix2[i][j]);
        } printf("\n");
    } return 0;
}