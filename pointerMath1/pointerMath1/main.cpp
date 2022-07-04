/*
Author:     Billy Gene Ridgeway
Purpose:    Learn how to use pointer arithmetic.
Date:       July 1st. 2022
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define COUNT 4

// basic address arithmetic

int main() {
	int *p;
	int a[COUNT];

	// First let's look at the size of a basic integer.
	printf("The size of an 'int' is %d bytes.\n\n", sizeof(int));

	// Initialize our array.
	for (int i = 0; i < COUNT; i++) a[i] = i;

	// Let's do some pointer arithmetic.
	p = a;						// Set the pointer to the array to the start of the array.
	printf("The address of a is %p; value of p is %p [%d]; value pointed to by p is %d.\n", a, p, p, *p);

	// Increment p by 1.
	// NOTE: The address of 'a' remains the same (because we haven't done anything to it)  ...
	// ... but the value of 'p' has been increased by 4 - the size of an integer - and so ...
	// the value pointed to by 'p' is now a[1].
	p = p + 1;
	printf("The address of a is %p; value of p is %p [%d]; value pointed to by p is %d.\n", a, p, p, *p);

	// Increment p by another 2 the value pointed to by 'p' is now a[3].
	p = p + 2;
	printf("The address of a is %p; value of p is %p [%d]; value pointed to by p is %d.\n", a, p, p, *p);

	// What happens if we go beyond the array end? There's nothing to stop you or warn you ...
	// ... so, increment p by another 1 the value pointed to by 'p' is now a[4]
	// ... but we will get junk.
	p = p + 1;
	printf("The address of a is %p; value of p is %p [%d]; value pointed to by p is %d.\n", a, p, p, *p);

	return 0;
}

