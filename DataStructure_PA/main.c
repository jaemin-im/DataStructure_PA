// PROPRECESSOR_LIST_START
#include <stdio.h>

#define ARR_SIZE 10
// PROPRECESSOR_LIST_END

// FUNCTION_VARIABLE_LIST_START
int main(int argc, char** argv);
void printMain(); // PRINT MAIN SCREEN
void bubbleSort(); // DO A BUBBLE SORT
void insertionSort(); // DO A INSERTION SORT
void binarySearch(); // DO A BINARY SEARCH
inline void swap(int* a, int* b); // USE ADRESS TO CALL SWAP
int array[ARR_SIZE] = { 0 }; // ARARY TO SORT OR SEARCH
// FUNCTION_VARIABLE_LIST_END

// MAIN_FUNCTION_START
int main(int argc, char** argv) {
	int select;
	printMain();
	scanf("%d", &select);
	switch (select) {
	case 1: // bubbleSort
		bubbleSort();
		break;
	case 2: // insertionSort
		insertionSort();
		break;
	case 3: // binarySearch
		binarySearch();
		break;
	default: // other Values
		printf("잘못된 값입니다.\n");
		break;
	}
	return 0; // END
}
// MAIN_FUNCTION_END

// SUBFUNCTION_START
void printMain() {
	printf("");
}

void bubbleSort() {

}

void binarySearch() {

}

void insertionSort() {

}

inline void swap(int* a, int* b) {
	void* temp = NULL;
	temp = a;
	a = b;
	b = temp;
}