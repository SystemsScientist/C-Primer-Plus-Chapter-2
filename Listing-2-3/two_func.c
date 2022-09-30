// two_func.c is a program using two functions in one file

#include <stdio.h>

void butler(void);	// function prototype

int main() {

	printf("I will summon the butler function.\n");
	butler();	// function call
	printf("Yes! Bring me some tea and writeable CD-ROMS.\n");

	return 0;
}

void butler(void) {	// function definition
	printf("You rang, sir?\n");
}
