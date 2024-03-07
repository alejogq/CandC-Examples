
#include <stdio.h>
#include <stdlib.h>

// Function prototypes
void addInteger(int **array, int *size, int value);


void removeInteger(int **array, int *size, int index);
void printArray(int *array, int size);

int main() {
    int *array = NULL; // Pointer to the array
    int size = 0;      // Size of the array

    char choice;
    int value, index;

    do {
        printf("\nMenu:\n");
        printf("1. Add integer\n");
        printf("2. Remove integer\n");
        printf("3. Print array\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);

        switch(choice) {
            case '1':
                printf("Enter the integer to add: ");
                scanf("%d", &value);
                addInteger(&array, &size, value);
                break;
            case '2':
                printf("Enter the index of the integer to remove: ");
                scanf("%d", &index);
                removeInteger(&array, &size, index);
                break;
            case '3':
                printf("Current array: ");
                printArray(array, size);
                break;
            case '4':
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != '4');

    // Free the allocated memory before exiting
    free(array);

    return 0;
}

void addInteger(int **array, int *size, int value) {
    (*size)++;
    *array = realloc(*array, (*size) * sizeof(int)); // Resize the array
    (*array)[(*size) - 1] = value; // Add the new integer to the end
}

void removeInteger(int **array, int *size, int index) {
    if (index < 0 || index >= *size) {
        printf("Invalid index. Cannot remove.\n");
        return;
    }

    // Shift elements to the left to fill the gap
    for (int i = index; i < (*size) - 1; i++) {
        (*array)[i] = (*array)[i + 1];
    }

    (*size)--;
    *array = realloc(*array, (*size) * sizeof(int)); // Resize the array
}

void printArray(int *array, int size) {
    if (size == 0) {
        printf("Array is empty.\n");
        return;
    }

    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}
