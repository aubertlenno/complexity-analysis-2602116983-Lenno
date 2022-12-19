#include <stdio.h>
#include <stdlib.h>

#define M 3
#define N 2

int main(){
    int matrix [M][N] = {
        {1,2},
        {3,4},
        {5,6}
    };

    int sum = 0;

    for (int i=0; i<M; i++){
        for (int j=0; j<N; j++){
            sum += matrix[i][j];
        }
    }

    printf("The sum is %d", sum);
}