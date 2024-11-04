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

    printf("Enter the dimensions of the 2nd matrix: ");
    int y2, x2;
    scanf("%d %d", &y2, &x2);

    if(y1!=y2 || x1!=x2)
    return 0;

    printf("Enter the elements of the 2nd matrix:\n");
    int matrix2[y2][x2];
    for(int i=0; i<y2; i++){
        for(int j=0; j<x2; j++){
            scanf("%d", &matrix2[i][j]);
        }
    }

    int temp = 0;

    for(int i=0; i<y1; i++){
        for(int j=0; j<x1; j++){
            if(matrix1[i][j]==matrix2[i][j]){
                temp++;
            }
        }
    }

    if(temp==y1*x1){
        printf("They are equal\n");
    } else {
        printf("They are not equal\n");
    } return 0;
}