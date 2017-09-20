# Getting-to-the-point

In order do this assignment, you need to be able to generate random numbers in c. 

* **Note**: On some systems, you may be able to use other functions than the ones described below, but they are not standard for linux, so you should stay away from them for now.
* Generating a random number in C requires 2 steps
    * Seeding the random number generator
        * srand( time(NULL) );
        * srand(<SEED>) seeds the random number generator with the provided argument.
        * If you use the same argument to srand() multiple times, you will get the exact same sequence of random numbers.
        * time(NULL) will return the current EPOCH time, it is commonly used with srand() to get new random sequences. 
    * Getting a random number
        * rand(); 
        * Returns the next random number in the sequence seeded by srand().
        * Returns an int.
    * srand() and rand() are both in <stdlib.h>
    * time() is in time.h

* And now for the assignment:

* Create an array large enough to store 10 ints.
* Populate the array with random values.
* Set the last value in the array to 0.
* Print out the values in this array
* Create a separate array large enough to store 10 ints.
* **USING ONLY POINTERS do the following**:
    * Populate the second array with the values in the first but in **reverse order**
* Print out the values in the second array

For this assignment, do not create helper functions, put everything inside main (it won't be too long). We will talk about passing arrays and pointers are function arguments next week.


Sample output: 
``` s
$ ./a.out 
The original array:
 arr[0]: 1057239544
 arr[1]: 1081754588
 arr[2]: 180689164
 arr[3]: 233522504
 arr[4]: 783054129
 arr[5]: 899333785
 arr[6]: 704576491
 arr[7]: 1549840821
 arr[8]: 728322791
 arr[9]: 0
The second array:
 arr2[0]: 0
 arr2[1]: 728322791
 arr2[2]: 1549840821
 arr2[3]: 704576491
 arr2[4]: 899333785
 arr2[5]: 783054129
 arr2[6]: 233522504
 arr2[7]: 180689164
 arr2[8]: 1081754588
 arr2[9]: 1057239544
 ```