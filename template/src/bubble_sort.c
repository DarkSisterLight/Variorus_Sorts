#include <stdio.h>

#include "bubble_sort.h"
#include "utils.h"

/**
    Сортировка пузырьком.

    \param[out] dest отсортированный массив
    \param[in] array исходный массив
    \param[in] size размер массива
*/
int* bubble_sort(int* array, int size) {
	int swap_count = 0;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (array[j] > array[j + 1]) {
				swap2(&array[i], &array[j]);
				swap_count++;
			}
		}
	}
	printf("Количество перестановок: %d\n", swap_count);
	return array;
}
