#include <stdio.h>
#include <stdlib.h>

void send2file(FILE*,int,char);

int main(){
    
    FILE *pwrite;

    char name[20];
    int phone;

    pwrite = fopen("phones.txt","w");

    if(pwrite == NULL){
        printf("Not allowed to perform the operation");
    }else{
        printf("Please input the data: name and phone ");
        scanf("%s%d",name, &phone);
        send2file(pwrite,phone, name);
        //fprintf(pwrite, "name= %s, phone= %d",name, phone);
    }

    fclose(pwrite);

    FILE *pRead;
    char nameRead[20];
    int numRead;

    pRead = fopen("phones.txt","r");

    if(pwrite == NULL){
        printf("Not allowed to perform the operation");
    }else{
        printf("File info:\n");
        while(!feof(pRead)){
            readfromfile();

            fscanf(pRead,"%s", nameRead);
            printf("%s",nameRead);
        }
    }

    fclose(pRead);

}




void send2file(FILE *in_file, int phone ,char name[20]){


}