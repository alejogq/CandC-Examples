#include <stdio.h>

# define ARRAY_LENGHT 10


//Prototype Function to swap
void swap(int * num1, int * num2);

//Prototype Function to loop inside the array
void bubble(int arr[], int lenght);


int main(){

    // integer array
    int numbers[ARRAY_LENGHT];

    // the user fills the array
    printf("Input the numbers:\n");
    for (int i=0; i<ARRAY_LENGHT;i++){
        scanf("%d",&numbers[i]);
    }

    //sort the array
    bubble(numbers, ARRAY_LENGHT);


    // we print array from smaller to biggest number
    printf("The ordered array is:\n");
    for (int i=0; i<ARRAY_LENGHT;i++){
        printf("%d",numbers[i]);
    }

}


void bubble(int arr[], int lenght){
    // printf("%d, %d\n", arr[2],arr[1]);
    // swap(&arr[2], &arr[1]);
    // printf("%d, %d\n", arr[2],arr[1]);

    // for loop to do the cycles
    for (int i =0;i<lenght;i++){
        // inner loop for comparing with each number
        for (int k =0;k<lenght;k++){
            swap(&arr[i], &arr[k]);
        }   
    }

}

void swap(int * num1, int * num2){
    int temp;
    
    if ( (*num1) < (*num2)){
        temp = (*num1);
        (*num1) = (*num2);
        (*num2) = temp;
    }

}