#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int array_uno[10]; // Original Array
    int array_dos[10]; // To be reversed

    srand(time(NULL)); // Random Seeding for the RNG

    int i; // Instantiates i

    for (i = 0; i < 9; i++) { // Populated indexes 0-8 with a random number
        array_uno[i] = rand();
    }

    array_uno[9] = 0; // The 9th index is set to 0

    printf("The original array: \n");

    for (i = 0; i < 10; i++) { // Prints the Array
        printf("array_uno[%d]: %d\n", i, array_uno[i]);
    }

    printf("\n"); // Creates a spacer between the prints

    int * pointer; // Declares a pointer

    for (i = 9; i >= 0; i--) { // Starts from the back of the first array and populates the 2nd in reverse
        pointer = &array_uno[i];
        array_dos[9 - i] = *pointer;
    }

    printf("The second array: \n");

    for (i = 0; i < 10; i++) { // Prints the reversed array
        printf("array_dos[%d]: %d\n", i, array_dos[i]);
    }
}