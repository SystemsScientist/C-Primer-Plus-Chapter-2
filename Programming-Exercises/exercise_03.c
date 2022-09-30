// Write a program that converts your age in years
// to days and displays both values. At this point,
// don't worry about fractional years and leap years

#include <stdio.h>

int main() {

	int years;
	int days = 0;

	printf("What is your age in years? ");
	scanf("%d", &years);

	days = years * 365;

	printf("You are approximately %d days old, \nwhich is %d years old", 
		days, years);

	printf("\n");
	return 0;
}
