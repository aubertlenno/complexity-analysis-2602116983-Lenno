#include <stdio.h>
#include <stdlib.h>

#define M 6
#define N 5

void intersection(int x[M], int y[N], int m, int n)
{
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            if (x[i] == y[j]){
                printf("%d ", x[i]);
            }
        }
    }
    printf("\n");
}

int main(){
    int x[M] = {1,4,5,6,2,3};
    int y[N] = {2,3,4,5,1};

    intersection(x,y,M,N);

    return 0;
}