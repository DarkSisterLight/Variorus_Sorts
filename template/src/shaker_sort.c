#include <stdbool.h>
#include <stdio.h>

#include "shaker_sort.h"
#include "utils.h"

/**
    Шейкерная сортировка.

    \param[out] dest отсортированный массив
    \param[in] array исходный массив
    \param[in] size размер массива
*/
int* shaker_sort(int* array, int size) {
	int sort_or_not = 1;
	int right = size, left = 1;
	int swap_count = false;
	do {
		sort_or_not = true;
		for (int i = left; i <= right; i++) {
			if (array[i - 1] > array[i]) {
				swap(array, i - 1, i);
				swap_count++;
				sort_or_not = false;
			}
		}
		right--;
		for (int i = right; i >= left; i--) {
			if (array[i] < array[i - 1]) {
				swap(array, i, i - 1);
				swap_count++;
				sort_or_not = false;
			}
		}
		left++;
	} while (sort_or_not == false);

	printf("Количество перестановок: %d\n", swap_count);

	return array;
}
