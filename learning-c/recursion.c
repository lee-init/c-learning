/*
    Recursion is where a function contains a call to itself. For example

    void helloWorld() {
        printf("Hello World!");
        helloWorld();
    }

*/

/*
    Exercise:
        Define a new function called factorial() that will compute the factorial by recursive multiplication (5! = 5 x 4 x 3 x 2 x 1).
        Note that by convension the factorial of 0 is equal to 1 (0! = 1);
*/

#include <stdio.h>

/*

    Syntax Note: If you write a function you call in the main function UNDERNEATH main(), like in this file, you must declare it before main().
    The compiler won't find it other wise.
    In C programming, everything flows down like water. If you write the fuction after you write the main function, the compiler won't see it.

*/

int factorial(int n);

int main() {
    /* testing code*/
    printf("0! = %i\n", factorial(0));
    printf("1! = %i\n", factorial(1));
    printf("3! = %i\n", factorial(3));
    printf("5! = %i\n", factorial(5));
}

int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    else if (n > 0) {
        return n * factorial(n - 1);
    }

    return 0;
}

/*
    Another way to write the factorial function would be:

        int factorial(int n) {
            if (n > 1) {
                return n * factorial(n - 1);
            }
            else {
                return 1;
            }
        }

    No need to check if n == 0
*/