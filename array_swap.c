#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int size = 10;

    int array_uno[size]; // Original Array
    int array_dos[size]; // Array to be reversed

    srand(time(NULL)); // Random Seeding for the RNG

    int i; // Instantiates i

    // Populates indexes 0-8 with a random number
    for (i = 0; i < size - 1; i++) {
        array_uno[i] = rand();
    }

    array_uno[size - 1] = 0; // The 9th index is set to 0

    printf("The original array: \n");

    // Prints the Array
    for (i = 0; i < size; i++) {
        printf("array_uno[%d]: %d\n", i, array_uno[i]);
    }

    printf("\n"); // Creates a spacer between the prints

    int * pointer; // Declares a pointer

    // Starts from the back of the first array and populates the 2nd in reverse
    for (i = size; i > 0; i--) {
        pointer = &array_uno[i - 1];
        array_dos[size - i] = *pointer;
    }

    printf("The second array: \n");

    // Prints the reversed array
    for (i = 0; i < size; i++) {
        printf("array_dos[%d]: %d\n", i, array_dos[i]);
    }
}