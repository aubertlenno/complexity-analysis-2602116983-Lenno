#include <stdio.h>

#define M 6
#define N 5

int check_in_array(int x[M], int y[N], int k){
    int result1 = 0;
    int result2 = 0;

    for (int i=0; i<M; i++){
        if (x[i] == k){
            result1 = 1;
        }
    }

    for (int j=0; j<N; j++){
        if (y[j] == k){
            result2 = 1;
        }
    }

    if ((result1 == 1) && (result2 == 1)){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int x[M] = {1,4,5,6,2,3};
    int y[N] = {2,3,4,5,1};
    int k = 5;

    printf("%d", check_in_array(x,y,k));

    return 0;
}