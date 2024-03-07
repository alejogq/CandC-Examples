#include <stdio.h>
#include <stdlib.h>


typedef struct {
    int phone;
    char name[20];
} user;


void fill(user ** );

int main(){

    user **memoryplace = calloc(2,sizeof(user));

    for(int i=0;i<2;i++){
        memoryplace[i]=calloc(1, sizeof(user));
    }

    fill(memoryplace);


}

void fill(user ** memoryplace){

    for(int i=0;i<2;i++){
        printf("please give a phone[%d]",i);
        scanf("%d",&memoryplace[i]->phone);

        printf("please give a name[%d]",i);
        scanf("%s",memoryplace[i]->name);

    }
    for(int i=0;i<2;i++){
        printf("the name[%d]: %s\n",i, (memoryplace[i]->name));
        printf("the phone[%d]: %d\n",i, (memoryplace[i]->phone));

    }

}