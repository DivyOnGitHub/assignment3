#include "functions.h"

int getPerimeter(int length, int width) {
	return 2 * (length + width);
}

int getArea(int length, int width) {
	return length * width;
}

int setLength(int input) {
	if (input >= 1 && input <= 99) {
		return input;
	}
	return 1;
}

int setWidth(int input) {
	if (input >= 1 && input <= 99) {
		return input;
	}
	return 1;
}

void printWelcomeMenu() {
	printf(" **********************\n");
	printf("**     Welcome to     **\n");
	printf("**    Assignment 02   **\n");
	printf(" **********************\n");
}

void printOptions() {
	printf("1. Get Rectange Length & Width\n");
	printf("2. Change Rectangle Length\n");
	printf("3. Change Rectangle Width\n");
	printf("4. Get Rectangle Perimeter\n");
	printf("5. Get Rectangle Area\n");
	printf("6. Exit\n");
}