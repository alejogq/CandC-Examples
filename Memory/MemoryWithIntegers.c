#include <stdio.h>
#include <stdlib.h>

void fill(int* );

int main(){
    int mynumber;
    int *memoryplace = calloc(1,sizeof(mynumber));
    fill(memoryplace);
}

void fill(int * memoryplace){
    printf("please give a number: ");
    scanf("%d",memoryplace);
    printf("the number: %d", (*memoryplace));
}