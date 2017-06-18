// PROPRECESSOR_LIST_START
#include <stdio.h>

#define ARR_SIZE 10
#define MAXNUM 1000
#define MINNUM -2147483648
// PROPRECESSOR_LIST_END

// FUNCTION_VARIABLE_LIST_START
int main(int argc, char** argv);
void printMain(); // PRINT MAIN SCREEN
void printResult(); // PRINT RESULT SCREEN
void bubbleSort(); // DO A BUBBLE SORT
void insertionSort(); // DO A INSERTION SORT
void binarySearch(); // DO A BINARY SEARCH
inline void swap(int* a, int* b); // USE ADRESS TO CALL SWAP
int array[ARR_SIZE] = { 0 }; // ARRAY FOR SORTING OR SEARCHING
int countChangeArray[MAXNUM] = { 0 }; // ARRAY FOR SAVING CHANGE COUNT
int countCompareArray[MAXNUM] = { 0 }; // ARRAY FOR SAVING COMPARE COUNT
// FUNCTION_VARIABLE_LIST_END

// MAIN_FUNCTION_START
int main(int argc, char** argv) {
	int select;
	printMain();
	while (1) {
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
		case 4: // Exit
			printf("프로그램을 종료합니다.\n");
			return 0;
		default: // other Values
			printf("잘못된 값입니다.다시 선택해 주십시오.\n");
			break;
		}
	}
	return 0; // END
}
// MAIN_FUNCTION_END

// SUBFUNCTION_START
void printMain() {
	printf("자료구조 수행평가 - 정렬과 탐색\n사용하고 싶은 정렬 및 탐색을 선택하세요.\n1.버블 정렬\n2.선택 정렬\n3. 이진 탐색\n4.프로그램 종료\n\n");
}

void printResult() {

}

void bubbleSort() {
	int temp;
	int loop = 0, changeCount = 0, compareCount = 0, i = 0, j = 0;
	printf("10개의 정수를 입력하세요. : \n");
	for (i = 0; i < 10; i++) {
		scanf("%d", &array[i]);
	}
	for (i = 0; i < ARR_SIZE-1; i++) {
		for (j = 0; j < ARR_SIZE - i - 1; j++) {
			if (array[j] > array[j + 1]) {
				countCompareArray[i] = ++compareCount;
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				++changeCount;
			}
		}
	}
	for (i = 0; i < ARR_SIZE; i++) {
		printf("%d ", array[i]);
	}
}

void binarySearch() {

}

void insertionSort() {
	int temp;
	int min = MINNUM;
}

inline void swap(int* a, int* b) {
	void* temp = NULL;
	temp = a;
	a = b;
	b = temp;
}