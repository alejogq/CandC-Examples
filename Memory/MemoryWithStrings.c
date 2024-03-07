#include <stdio.h>
#include <stdlib.h>

void fill(char* );

int main(){
    char *memoryplace = calloc(1, sizeof(char[20]));
    fill(memoryplace);
}

void fill(char * memoryplace){
    printf("please give a string: ");
    scanf("%s",memoryplace);
    printf("the string: %s\n", (memoryplace));
}