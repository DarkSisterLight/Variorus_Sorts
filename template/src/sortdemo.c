#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "bubble_sort.h"
#include "quick_sort.h"
#include "utils.h"

/**
    Сортировка вставками.

    \param[out] dest отсортированный массив
    \param[in] array исходный массив
    \param[in] size размер массива
*/
int* insert_sort(int* src) {
    return 0;
}

/**
    Сортировка слиянием.

    \param[out] dest отсортированный массив
    \param[in] array исходный массив
    \param[in] size размер массива
*/
int* merge_sort(int* src) {
    return 0;
}

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

int main(void) {
	puts("Программа демонстрации алгоритмов сортировки");
	puts("--------------------------------------------");

	srand(time(NULL));

	int array_size = 50;
	int src[array_size];
	int random_radix = 100;

	random_array(src, array_size, random_radix);

	printf("Исходный массив: ");
	print_array(src, array_size);
	puts("--------------------------------------------");

	printf("--= Сортировка пузырьком =--\n");
	int src1[array_size];
	memcpy(src1, src, array_size * sizeof(int));
	bubble_sort(src1, array_size);

	printf("Отсортированный массив: ");
	print_array(src1, array_size);

	puts("--------------------------------------------");

	printf("--= Шейкерная сортировка =--\n");
	int src2[array_size];
	memcpy(src2, src, array_size * sizeof(int));
	shaker_sort(src2, array_size);

	printf("Отсортированный массив: ");
	print_array(src2, array_size);

	puts("--------------------------------------------");

	printf("--= Быстрая сортировка =--\n");
	int src3[array_size];
	memcpy(src3, src, array_size * sizeof(int));
	quick_sort(src3, array_size);

	printf("Отсортированный массив: ");
	print_array(src3, array_size);

	printf("Статистика:\n");
	printf("...\n");

	printf("Выводы:\n");
	printf("...\n");

	return EXIT_SUCCESS;
}
