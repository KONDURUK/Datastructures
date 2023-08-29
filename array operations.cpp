#include <stdio.h>

#define MAX_SIZE 100
void display(int arr[], int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int insert(int arr[], int size, int element, int position) {
    if (size >= MAX_SIZE) {
        printf("Array is full, insertion failed!\n");
        return size;
    }

    if (position < 0 || position > size) {
        printf("Invalid position for insertion!\n");
        return size;
    }
    for (int i = size - 1; i >= position; i--) {
        arr[i + 1] = arr[i];
    }

    arr[position] = element;
    return size + 1;
}

// Function to delete an element at a given position
int deleteElement(int arr[], int size, int position) {
    if (size <= 0) {
        printf("Array is empty, deletion failed!\n");
        return size;
    }

    if (position < 0 || position >= size) {
        printf("Invalid position for deletion!\n");
        return size;
    }

    // Shift elements to the left to fill the gap left by the deleted element
    for (int i = position; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    return size - 1;
}

int main() {
    int arr[MAX_SIZE];
    int size = 0;
    int choice, element, position;

    do {
        printf("\nArray Operations Menu:\n");
        printf("1. Insert element\n");
        printf("2. Delete element\n");
        printf("3. Display elements\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the element to insert: ");
                scanf("%d", &element);
                printf("Enter the position to insert at: ");
                scanf("%d", &position);
                size = insert(arr, size, element, position);
                break;

            case 2:
                printf("Enter the position to delete from: ");
                scanf("%d", &position);
                size = deleteElement(arr, size, position);
                break;

            case 3:
                display(arr, size);
                break;

            case 4:
                printf("Exiting the program.\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
                break;
        }
    } while (choice != 4);

    return 0;
}

