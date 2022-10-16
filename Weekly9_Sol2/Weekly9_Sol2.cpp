#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()						//Problem 110, Solution 2, ID Student 65010902
{
	int person;
	printf("Enter many of people: ");
	scanf("%d", &person);
	printf("The number of card is: %d", person * (person - 1));
	return 0;
}