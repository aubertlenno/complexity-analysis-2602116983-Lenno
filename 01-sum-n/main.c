#include <stdio.h>
#include <stdlib.h>

int sum(int n){
    int result = 0;
    int i = 0;
    
    while (i <= n){
        result += i;
        i++;
    }

    return result;

}

int main(){
    printf("The sum of 10 n is %d", sum(10));

    return 0;
}
