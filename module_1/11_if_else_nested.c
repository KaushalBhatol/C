#include <stdio.h>

void main(){
    int i, j, k, max;
    i = 4;
    j = 5;
    k = 6;

    if (i > j){
        if(i > k){
          max = i;
        }
        else{
          max = k;
        }
    }
    else if( j > k){
        max = j;
    }
    else {
        max = k;
    }

    printf("max = %d\n", max);
}