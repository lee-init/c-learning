
// allows you to run printf() functions etc..
#include <stdio.h>

// structures - similar to classes; typedef assignes an alias to the structure
typedef struct {
    char* name;
    int age;
} person;

// void function - returns nothing
void addone(int* n) {
    /*
        Recieves pointer to variable's address rather than
        variable itself and updates the value that way rather than
        computing n++. This means the values can be accessed globaly
    */
    (*n)++;
}

// pointers in structures - define pointer p as type person
void new_age(person* p) {
    /*
        Same as the addone function except p is of type 'person' which
        is a structure
    */
    (*p).age++;
    /*
        p*->age++; is an alternate shorthand method for the same thing
    */
}


// main function is the starting point of every C program
int main() {

    int n;
    printf("Before: %d\n", n);
    addone(&n); // same as *n = &n which is the same value
    printf("After: %d\n", n);

    person Lee;
    Lee.name = "Lee";
    Lee.age = 30;

    printf("Hello, World! My name is %s. I am %d years old\n", Lee.name, Lee.age);
    printf("The pointer points to %p which is where the value for 'name' ist stored \n", &Lee.name);

    new_age(&Lee);
    printf("Lee's new age is %d\n", Lee.age);

    int a = 1;
    printf("The integer variable 'a' = %d\n", a);
    printf("'a' is stored at %p\n", &a);

    int* pointer_to_a = &a;
    printf("The pointer_to_a returns the value of 'a' itself, which is %d\n", *pointer_to_a);
    *pointer_to_a = 2;
    printf("I have dereferenced the pointer variable 'pointer_to_a', so now the value of 'a' is %d\n", *pointer_to_a);

    // Dereferencing explination
    /*
        int x = 90;
        int *pointer;
        pointer = &x (same as line 33)
        *pointer=91 <-- this is dereferencing a pointer (using '*' on a pointer) and it allows you to alter the value of a variable the pointer is pointing to
    */

    return 0;

}

