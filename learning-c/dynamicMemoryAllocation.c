/*

    typedef struct {
        char *name;
        int age;
    } person;

    Dynamic memory allocation can be done like this
    person * myperson = (person *) malloc(sizeof(person))

    create a person pointer to myperson and allocate enough memory to accommodate the size of 'myperson' (in bytes)
    malloc() returns a void pointer, putting (person *) before malloc sets the type of the pointer returned to be of type 'person' <--- typecasting

*/

// Exercise: Use malloc to dynamically allocate a point structure

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x;
    int y;
} point;

int main() {
    point* mypoint = NULL;

    /*
        Dynamically allocate a new point
        struct which mypoint points to here
    */

    point* mypoint = malloc(sizeof(point));

    mypoint->x = 10;
    mypoint->y = 5;
    printf("mypoint coordinates: %d, %d\n", mypoint->x, mypoint->y);

    // Free the memory once it's been used
    free(mypoint);
    return 0;
}

//Exercise 2

int main() {
    int i, j;
    /* TODO: define the 2D pointer variable here */
    int** pnumbers;
    int nrows = 3;
    int ncols = 3;

    /* TODO: complete the following line to allocate memory for holding three rows */
    pnumbers = (int**)malloc(sizeof(int*));

    /* TODO: allocate memory for storing the individual elements in a row */
    pnumbers[0] = (int*)malloc(nrows * sizeof(int));

    pnumbers[0][0] = 1;
    pnumbers[1][0] = 1;
    pnumbers[1][0] = 1;
    pnumbers[2][0] = 1;
    pnumbers[2][0] = 2;
    pnumbers[2][0] = 1;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d", pnumbers[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++) {
        /* TODO: Free memory allocated for each row */
        free(pnumbers[i]);
    }

    /* TODO: Free the top-leveel pointer */
    free(pnumbers);
    return 0;
}

