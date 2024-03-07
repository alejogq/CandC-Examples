#include <stdio.h>
#include <stdlib.h>

void fill(char** );

int main(){

    // Allocating memory
    char **memoryplace = calloc(5, sizeof(char[20]));
    for(int i=0;i<5;i++){
        memoryplace[i]=calloc(20, sizeof(char));
    }

    fill(memoryplace);
}

void fill(char ** memoryplace){
    for(int i=0;i<5;i++){
        printf("please give a string[%d]",i);
        scanf("%s",memoryplace[i]);
    }
    for(int i=0;i<5;i++){
        printf("the string[%d]: %s\n",i, (memoryplace[i]));
    }
}