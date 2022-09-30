// Write a program that creates an integer variable called toes.
// Have the program set toes to 10. Also have the program
// calculate what twice toes is and what toes squared is. The
// program should print all three values, identifying them.

#include <stdio.h>

int main() {

	int toes = 10;
	int twice_toes;
	int toes_squared;

	twice_toes = toes * 2;
	toes_squared = toes * toes;

	printf("toes = %d, twice_toes = %d, toes_squared = %d", 
		toes, twice_toes, toes_squared);

	printf("\n");
	return 0;
}
