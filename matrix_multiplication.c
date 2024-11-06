#include <stdio.h>

int main(){
    printf("Enter the dimensions of the 1st matrix: ");
    int y1, x1;
    scanf("%d %d", &y1, &x1);

    printf("Enter the elements of the 1st matrix:\n");
    int matrix1[y1][x1];
    for(int i=0; i<y1; i++){
        for(int j=0; j<x1; j++){
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the dimensions of the 2nd matrix:1 ");
    int y2, x2;
    scanf("%d %d", &y2, &x2);

    if(x1!=y2)
    return 1;

    printf("Enter the elements of the 2nd matrix:\n");
    int matrix2[y2][x2];
    for(int i=0; i<y2; i++){
        for(int j=0; j<x2; j++){
            scanf("%d", &matrix2[i][j]);
        }
    }

    int matrix3[y1][x2];

    for(int i=0; i<y1; i++){
        for(int j=0; j<x2; j++){
            matrix3[i][j]=0;
        }
    }

    for(int i=0; i<y1; i++){
        for(int j=0; j<x2; j++){
            for(int k=0; k<x1; k++){
                matrix3[i][j]+=matrix1[i][k]*matrix2[k][j];
            }
        }
    }

    printf("Resulting matrix:\n");
    for(int i=0; i<y1; i++){
        for(int j=0; j<x2; j++){
            printf("%d ", matrix3[i][j]);
        } printf("\n");
    } return 0;
}