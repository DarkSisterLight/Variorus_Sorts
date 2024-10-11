#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "utils.h"

void swap(int* array, int i, int j) {
	int t = array[i];
	array[i] = array[j];
	array[j] = t;
}

int* random_array(int* array, int size, int num) {
	for (int i = 0; i < size; i++) {
		array[i] = rand() % num;
	}
	return array;
}

void print_array(int* array, int size) {
	printf("[");
	for (int i = 0; i < size; i++) {
		printf("%d", array[i]);
		if (i < size - 1) {
			printf(",");
		}
	}
	printf("]\n");
}
