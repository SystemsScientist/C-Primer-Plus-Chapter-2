// Write a program that produces the following output:
//
// For he's a jolly good fellow!
// For he's a jolly good fellow!
// For he's a jolly good fellow!
// Which nobody can deny!
//
// Have the program use two user-defined functions in
// addition to main(): one that prints the "jolly good"
// message once, and one that prints the final line once

#include <stdio.h>

void function_one(void);
void function_two(void);

int main() {

	function_one();
	printf("For he's a jolly good fellow!\n");
	printf("For he's a jolly good fellow!\n");
	function_two();

	printf("\n");
	return 0;
}

void function_one(void) {

	printf("For he's a jolly good fellow!\n");
}

void function_two(void) {

	printf("Which nobody can deny!");
}
