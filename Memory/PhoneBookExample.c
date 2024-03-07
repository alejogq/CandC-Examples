#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


typedef struct{
    int phone;
    char name[20];
    char lastname[20];
} user;


void Add_Friend(user **array, int *size, user inputuser);

void Show_History(user **array, int *size);

//void Show_History
int main(){
    user *array = NULL;
    user inputuser;
    int size = 0;
    
    
    int chose, phone_number;

    char first_name[20];
    char last_name[20];

    
    do{
        printf("\nPhone Book Application\n\n");
        printf("1) Add Friend\n");
        printf("2) Delete Friend\n");
        printf("3) Show Phone Book\n");
        printf("What do you want to do:\n\n");
        scanf("%d", &chose);
        
        
    switch(chose)
    {
        case 1: printf("Phone Number:\n");
                scanf("%d", &phone_number);
                printf("First Name:\n");
                scanf("%s", first_name);
                printf("Last Name:\n");
                scanf("%s", last_name);
                
                inputuser.phone=phone_number;
                strcpy(inputuser.name,first_name);
                strcpy(inputuser.lastname,last_name);
                
                Add_Friend(&array, &size, inputuser);
                //printf("%s,  %s,  %d",inputuser.name, inputuser.lastname,inputuser.phone);            
                break;
            
        case 2: printf("Delete Number:\n");
                scanf("%d", &phone_number);
                break;
            
        case 3:
                Show_History(&array, &size);
                break;        
    }
    }while (true);
    return 0;
}
void Add_Friend(user **array, int *size, user inputuser ){

    printf("%s,  %s,  %d",inputuser.name,inputuser.lastname,inputuser.phone);
    (*size)++;
    *array = realloc(*array, (*size) * sizeof(user));
    (*array)[(*size -1)] = inputuser;
    
}

void Show_History(user **array, int *size){
    printf("Phone History:\n");
    for(int i =0;i<(*size);i++){
        printf("\n\nUser # %d\n",i);
         printf("  Phone: %d\n",(*array)[(i)].phone);
         printf("  Name: %s\n",(*array)[(i)].name);
         printf("  Last Name: %s\n",(*array)[(i)].lastname);
    }   

}

